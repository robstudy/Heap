#include <iostream>
#include "Heap.cc"

int main() {
	int size = 10;
	int A[size] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	std::cout << "Heap!" << std::endl;
	for(int i=0; i < size; i++) std::cout << A[i] << " ";
	std::cout << std::endl;
	BuildHeap(A,size);
	for(int i=0; i < size; i++) std::cout << A[i] << " ";
	std::cout << std::endl;
	return 0;
}