#include "write_file.hpp"
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

template <typename T> std::vector<T> generate(size_t arrSize) {
  std::vector<T> arr(arrSize);

  for (size_t i = 0; i < arrSize; i++) {
    arr[i] = i;
  }
  return arr;
}

int main() {

  std::cout << "1 mb float sample : \n";
  std::string file_name = "samples/float_1mb.txt";
  std::vector<float> contents = generate<float>((1024 * 1024) / sizeof(float));
  write_file<float>(file_name, contents);

  std::cout << "10 mb float sample : \n";
  file_name = "samples/float_10mb.txt";
  contents = generate<float>((10240 * 1024) / sizeof(float));
  write_file<float>(file_name, contents);

  std::cout << "1 gb float sample : \n";
  file_name = "samples/float_1gb.txt";
  contents = generate<float>((1024 * 1024 * 1024) / sizeof(float));
  write_file<float>(file_name, contents);

  std::cout << "1 mb int sample : \n";
  file_name = "samples/int_1mb.txt";
  std::vector<int> int_contents = generate<int>((1024 * 1024) / sizeof(int));
  write_file<int>(file_name, int_contents);

  std::cout << "10 mb int sample : \n";
  file_name = "samples/int_10mb.txt";
  int_contents = generate<int>((10240 * 1024) / sizeof(int));
  write_file<int>(file_name, int_contents);

  std::cout << "1 gb int sample : \n";
  file_name = "samples/int_1gb.txt";
  int_contents = generate<int>((1024 * 1024 * 1024) / sizeof(int));
  write_file<int>(file_name, int_contents);
}
