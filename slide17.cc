#include <iostream>
void g(int x) {
  int y=42;
  std::cout << "g: " << &x << " " << &y << "\n";
}
void f(int a) {
  int b=10;
  std::cout << "f: " << &a << " " << &b << "\n";
  g(37);
}
int main(void) {
  int i = 357;
  int j = 1000;
  std::cout << "main: " << &i << " " << &j << "\n";
  f(67);
  g(89);
}
