#include <cmath>
template <typename T>
void swap(T* a, T* b)
{
	T temp = a;
	b = a;
	a = temp;
};

template <typename T>
void Max_Heapify(T* A, int index, int size) {
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	int maxIndex = index;
	
	if ((left <= size) && (A[left] > A[index]))
		maxIndex = left;
	if((right <= size) && (A[right] > A[maxIndex]))
		maxIndex = right;
	if(maxIndex != index) {
		T tmp = A[index];
		A[index] = A[maxIndex];
		A[maxIndex] = tmp;
		Max_Heapify(A, maxIndex, size);
	}
};

template <typename T>
void BuildHeap(T* A, int size){
	size--;
	for (int i = size/2; i >= 0; i--)
			Max_Heapify(A, i, size);
};

template <typename T>
void HeapSort(T* A, int size) {
	//Implement later
};