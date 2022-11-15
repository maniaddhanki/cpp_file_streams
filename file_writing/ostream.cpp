#include "write_file.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

template <typename T>
void write_file(std::string file_name, std::vector<T> contents) {
  Timer stop_watch = Timer{};
  stop_watch.start_timer();

  std::ofstream file(file_name);
  auto ostream = std::ostream_iterator<T>(file);
  std::copy(contents.begin(), contents.end(), ostream);

  stop_watch.stop_timer();
  file.close();
  std::cout << "istream took : " << stop_watch.time_elapsed() << "ms\n";
}

template void write_file<float>(std::string file_name,
                                std::vector<float> contents);
template void write_file<int>(std::string file_name, std::vector<int> contents);