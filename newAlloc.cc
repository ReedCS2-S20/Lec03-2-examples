#include <stdio.h>

int main(void) {
  int* A = new int[32];
  int* A1 = new int[64];
  int* A2 = new int[4];
  double* D = new double[100];
  char* S = new char[20];
  printf("A:  %lx\n",  (unsigned long)A );
  printf("A1: %lx\n", (unsigned long)A1);
  printf("A2: %lx\n", (unsigned long)A2);
  printf("D:  %lx\n",  (unsigned long)D );
  printf("S:  %lx\n",  (unsigned long)S );
  printf("&A[0]: %lx\n",(unsigned long)&(A[0]));
  printf("&A[1]: %lx\n",(unsigned long)&(A[1]));
  printf("&A[2]: %lx\n",(unsigned long)&(A[2]));
  printf("&D[0]: %lx\n",(unsigned long)&(D[0]));
  printf("&D[1]: %lx\n",(unsigned long)&(D[1]));
  printf("&D[2]: %lx\n",(unsigned long)&(D[2]));
  printf("&S[0]: %lx\n",(unsigned long)&(S[0]));
  printf("&S[1]: %lx\n",(unsigned long)&(S[1]));
  printf("&S[2]: %lx\n",(unsigned long)&(S[2]));
  delete [] A; delete [] A1; delete [] A2;
  delete [] D; delete [] S;
}
