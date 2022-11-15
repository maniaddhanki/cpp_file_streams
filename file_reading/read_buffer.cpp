#include "read_file.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

template <typename T> T read_file(std::string file_name) {
  Timer stop_watch = Timer{};
  stop_watch.start_timer();

  std::ifstream file(file_name);
  std::ostringstream contents;
  contents << file.rdbuf();

  stop_watch.stop_timer();
  file.close();

  std::cout << "read buffer took : " << stop_watch.time_elapsed() << "ms\n";
  return contents.str();
}