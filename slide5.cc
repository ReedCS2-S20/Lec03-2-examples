#include <iostream>

int main(void) {
  double x = 42.0;
  std::cout << "The storage for x is @" << (&x) << "\n";
  std::cout << "Ints use " << sizeof(int)  << " bytes.\n";
  std::cout << "Doubles use " << sizeof(x) << " bytes.\n";
  std::cout << "Chars use " << sizeof('a') << " bytes.\n";
}
