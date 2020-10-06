#include <iostream>
#include <vector>
#include "hw5.h"

void print(std::vector<std::string> &v) {
  std::cout << "[";
  bool first = true;
  for (auto x : v) {
    if (!first) {
      std::cout << ", ";
    }
    std::cout << x;
    first = false;
  }
  std::cout << "]";
  std::cout << std::endl;
}

int main() {
  std::vector<std::string> v;

  v = {"emma", "dora", "ruth", "ziegellaub", "eichler"};
  std::cout << "Case 1: ";
  //MergeSort(v);
  MergeSort(v);
  print(v);
  std::cout << "Expected: [dora, eichler, emma, ruth, ziegellaub]" << std::endl;

  std::vector<int> vec = {2, 5, 1, 3};
  std::cout << "Case 2: ";
  InsertionSort(vec, vec.size());
  for(int i = 0; i < vec.size(); i++)
    std::cout << vec[i] << ", ";
  std::cout << std::endl << "Expected: 1, 2, 3, 5" << std::endl;
}