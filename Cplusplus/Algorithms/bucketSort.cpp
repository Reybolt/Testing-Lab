#include "bucketSort.h"
#include <math.h>

int* bucketSort(int arrA[], int arrSize)
{
	int* arrB; // Two dimensional array
	for (int i = 1; i<arrSize; i++)
	{
		arrB[floor(n*arrA[i])] = arr[i];			
	}
	for (int i = 0; i<n-1;i++)
	{
		arrB[i][i] = insertionSort(arrB[i][i], arrSize);
	}

return arrA;
}
