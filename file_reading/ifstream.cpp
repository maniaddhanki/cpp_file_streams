#include "read_file.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

template <typename T> T read_file(std::string file_name) {
  Timer stop_watch = Timer{};
  stop_watch.start_timer();

  T contents;
  std::ifstream file(file_name, std::ios::b);
  file.seekg(0, std::ios::end);
  size_t size = file.tellg() / sizeof(contents[0]);
  contents.resize(file.tellg());
  file.seekg(0, std::ios::beg);
  file.read(&contents[0], contents.size());

  stop_watch.stop_timer();
  file.close();
  std::cout << "ifstream took : " << stop_watch.time_elapsed() << "ms\n";
  return contents;
}

template std::string read_file<std::string>(std::string file_name);
template std::vector<int> read_file<std::vector<int>>(std::string file_name);
template std::vector<float>
read_file<std::vector<float>>(std::string file_name);