#include <iostream>
#include "Heap.cc"

int main() {
	int size = 7;
	int *A;
	A = new int[size];
	for(int i = 0; i < size; i++) A[i] = i;
	std::cout << "Heap!" << std::endl;
	for(int i=0; i < size; i++) std::cout << A[i] << " ";
	std::cout << std::endl;
	BuildHeap(A,size);
	for(int i=0; i < size; i++) std::cout << A[i] << " ";
	std::cout << std::endl;
	return 0;
}