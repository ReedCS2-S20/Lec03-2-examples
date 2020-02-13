#include <iostream>
int main(void) {
  int* A = new int[3];
  A[0]=10; A[1]=35; A[2]=17;

  int* front  = &(A[0]);
  int* middle = &(A[1]);
  int* end    = &(A[2]);

  std::cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<"\n";
  front[1]  = 36;
  std::cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<"\n";
  middle[0] = 37;
  std::cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<"\n";
  end[-1]   = 38;
  std::cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<"\n";

  delete [] A;
  // delete [] front; // would be ok, too.
}
