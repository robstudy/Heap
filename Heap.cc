#include <cmath>
template <typename T>
void swap(T* A, int index_a, int index_b)
{
	T temp = A[index_a];
	A[index_a] = A[index_b];
	A[index_b] = temp;
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
		swap(A, index, maxIndex);
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
	BuildHeap(A, size);
	for(int i = (size-1); i >= 1; i--) {
		swap(A, 0, i);
		Max_Heapify(A, 0, i-1);
	}
};