
#include <stdio.h>
#include "heap.h"

int main(void)
{
	//int arr[10] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
	//int arr2[10] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	int arr3[10] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};
	int *sortedArray;
	sortedArray = heapSort(arr3,10,10);
	//sortedArray = buildMaxHeap(arr2,10);
	//sortedArray = maxheapify(arr,10,2); 
	printf("Sorted Array: ");
	for (int i=0; i<10; i++)
	{
		printf("%5d, ", sortedArray[i]);
	}
	printf("\n");
	return 1;
}
