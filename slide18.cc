#include <iostream>

struct cmpx {
  double re;
  double im;
};

int main(void) {
  int a[10];
  cmpx z;
  std::cout << "a[2] lives @" << &(a[2]) << std::endl; 
  std::cout << "a[3] lives @" << &(a[3]) << std::endl;
  std::cout << "z.re lives @" << &(z.re) << std::endl;
  std::cout << "z.im lives @" << &(z.im) << std::endl;
}
