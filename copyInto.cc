#include <iostream>

void outputArray(std::string lbl, int *A, int n) { 
  std::cout << lbl << "[";
  std::string spacer = "";
  for (int i=0; i<n; i++) {
    std::cout << spacer << A[i];
    spacer = ", ";
  }
  std::cout << "]" << std::endl;
}

void copyInto(int* src, int* dst, int num) {
  for (int i=0; i<num; i++) {
    dst[i] = src[i];
  }
}

int main(void) {
  int* A = new int[3];
  A[0]=10; A[1]=35; A[2]=17;
  int* B = new int[6];   
  B[0]=16; B[1]=25; B[2]=36; B[3]=49; B[4]=64; B[5]=81;
  outputArray("A: ", A, 3);
  outputArray("B: ", B, 6);
  copyInto(A,&(B[2]),3);
  outputArray("A: ", A, 3);
  outputArray("B: ", B, 6);
  delete [] A; delete [] B;
}
