#include "read_file.hpp"
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

template <typename T> std::vector<T> read_file(std::string file_name) {
  Timer stop_watch = Timer{};
  stop_watch.start_timer();

  std::ifstream file(file_name);
  std::vector<T> contents;

  file.seekg(0, std::ios::end);
  contents.reserve(file.tellg());
  file.seekg(0, std::ios::beg);

  std::copy(std::istream_iterator<T>(file), std::istream_iterator<T>(),
            std::back_inserter(contents));

  stop_watch.stop_timer();
  file.close();
  std::cout << "copy took : " << stop_watch.time_elapsed() << "ms\n";
  return contents;
}

template std::vector<int> read_file<int>(std::string file_name);
template std::vector<float> read_file<float>(std::string file_name);