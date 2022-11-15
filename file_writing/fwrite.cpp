#include "write_file.hpp"
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

template <typename T>
void write_file(std::string file_name, std::vector<T> contents) {
  Timer stop_watch = Timer{};
  stop_watch.start_timer();

  std::FILE *file = std::fopen(file_name.c_str(), "w");
  size_t size = sizeof(contents[0]);

  std::fwrite(contents.data(), size, contents.size(), file);

  stop_watch.stop_timer();
  std::fclose(file);
  std::cout << "fwrite took : " << stop_watch.time_elapsed() << "ms\n";
}
template void write_file<int>(std::string file_name, std::vector<int> contents);

template void write_file<float>(std::string file_name,
                                std::vector<float> contents);