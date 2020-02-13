#include <iostream>

int main(void) {
  int* a = new int[10];
  int* b = new int[100];
  int* c = new int[10];
  std::cout << "a[0] is @" << &(a[0]) << std::endl;
  std::cout << "b[0] is @" << &(b[0]) << std::endl;
  std::cout << "c[0] is @" << &(c[0]) << std::endl; 
}
