#include "read_file.hpp"
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

template <typename T> std::vector<T> read_file(std::string file_name) {
  Timer stop_watch = Timer{};
  stop_watch.start_timer();

  std::FILE *file = std::fopen(file_name.c_str(), "rb");

  std::vector<T> file_contents;
  std::fseek(file, 0, SEEK_END);
  size_t size = ftell(file) / sizeof(file_contents[0]);
  file_contents.resize(size);
  std::rewind(file);

  std::fread(&file_contents[0], sizeof(file_contents[0]), file_contents.size(),
             file);

  stop_watch.stop_timer();
  std::fclose(file);
  std::cout << "fread took : " << stop_watch.time_elapsed() << "ms\n";
  return file_contents;
}
template std::vector<int> read_file<int>(std::string file_name);

template std::vector<float> read_file<float>(std::string file_name);
