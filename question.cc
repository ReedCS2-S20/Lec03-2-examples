#include <iostream>

int main(void) {
  int* a = new int[4];
  int* b = new int[3];
  std::cout << "a starts @" << a << std::endl;
  std::cout << "b starts @" << b << std::endl;
  int i = 42;
  int j = 37;
  int* p = &i;
  int* q = &j;
  std::cout << "i lives @" << p << std::endl;
  std::cout << "j lives @" << q << std::endl;
  
  std::cout << "&a is " << &a << std::endl;
  std::cout << "&b is " << &b << std::endl;
  std::cout << "&p is " << &p << std::endl;
  std::cout << "&q is " << &q << std::endl;
}
