#include <iostream>
#include <stdio.h>

int* requestElements(int sz) {
  std::cout << "Enter its " << sz << " items:\n";
  int *seq = new int[sz];
  for (int i=0; i<sz; i++) {
    std::cin >> seq[i];
  }
  return seq;
}

int* append(int* A1, int n1, int* A2, int n2) {
  int* A = new int[n1+n2];
  int i = 0;
  // Copy the first into the front of `A`.
  for (int i1=0; i1<n1; i1++) {
    A[i] = A1[i1];
    i++;
  }
  // Copy the second into the end of `A`.
  for (int i2=0; i2<n2; i2++) {
    A[i] = A2[i2];
    i++;
  }
  return A;
}

void output(int *seq, int sz) {
  for (int i=0; i<sz; i++) {
    std::cout << seq[i] << " ";
  }
  std::cout << std::endl;
}

int main(void) {
  std::cout << "Enter the size of the first: ";
  int sz1;  
  std::cin >> sz1;
  int *seq1 = requestElements(sz1);
  std::cout << "Enter the size of the second: ";
  int sz2;  
  std::cin >> sz2;
  int *seq2 = requestElements(sz2);
  int *seq3 = append(seq1,sz1,seq2,sz2);
  int sz3 = sz1+sz2;
  output(seq3,sz3);
  // print the hexadecimal code of their locations
  printf("seq1: %lx\n",(unsigned long)seq1);
  printf("seq2: %lx\n",(unsigned long)seq2);
  printf("seq3: %lx\n",(unsigned long)seq3);
  delete [] seq1;
  delete [] seq2;
  delete [] seq3;
}
