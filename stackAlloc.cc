#include <stdio.h>

struct cmpx {
  double re;
  double im;
};

int main(void) {
  int* A = new int[32];
  int i;
  double x;
  cmpx z;
  char c; 
  printf("A:     %lx\n",  (unsigned long)A );
  printf("&A:    %lx (%ld bytes)\n",  (unsigned long)&A, sizeof(int*));
  printf("&i:    %lx (%ld bytes)\n",  (unsigned long)&i, sizeof(int));
  printf("&x:    %lx (%ld bytes)\n",  (unsigned long)&x, sizeof(double));
  printf("&z:    %lx (%ld bytes)\n",  (unsigned long)&z, sizeof(cmpx));
  printf("&z.re: %lx (%ld bytes)\n",  (unsigned long)&(z.re), sizeof(z.re));
  printf("&z.im: %lx (%ld bytes)\n",  (unsigned long)&(z.im), sizeof(z.im));
  printf("&c:    %lx (%ld bytes)\n",  (unsigned long)&c, sizeof(c));
  delete [] A;
}
