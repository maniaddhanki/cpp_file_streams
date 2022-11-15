#include "read_file.hpp"
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

int main() {
  // std::cout << "1 mb string sample : \n";
  // std::string file_name = "samples/sample_1_mb.txt";
  // read_file<std::string>(file_name);

  // std::cout << "10 mb string sample : \n";
  // file_name = "samples/sample_10_mb.txt";
  // read_file<std::string>(file_name);

  // std::cout << "1 gb string sample : \n";
  // file_name = "samples/sample_1_gb.txt";
  // read_file<std::string>(file_name);

  std::cout << "1 mb float sample : \n";
  std::string file_name = "samples/float_1mb.txt";
  std::vector<float> result = read_file<float>(file_name);

  std::cout << "10 mb float sample : \n";
  file_name = "samples/float_10mb.txt";
  read_file<float>(file_name);

  std::cout << "1 gb float sample : \n";
  file_name = "samples/float_1gb.txt";
  read_file<float>(file_name);

  std::cout << "1 mb int sample : \n";
  file_name = "samples/int_1mb.txt";
  read_file<int>(file_name);

  std::cout << "10 mb int sample : \n";
  file_name = "samples/int_10mb.txt";
  read_file<int>(file_name);

  std::cout << "1 gb int sample : \n";
  file_name = "samples/int_1gb.txt";
  read_file<int>(file_name);
}
