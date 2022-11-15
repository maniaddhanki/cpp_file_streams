#include <iostream>
#include <typeinfo>
#include <vector>
int main() {
  std::vector<float> a;
  std::cout << sizeof(a[0]) << "\n";
}