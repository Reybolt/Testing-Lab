#include <math.h>
#include <iostream>
#define parent(i) (floor(i/2))
#define left(i) (2*i)
#define right(i) (2*i +1)
using namespace std;

int* maxheapify(int arr[],int heapSize, int i)
{
	int largest;
	int l = left(i);
	int r = right(i);
	if( (l <= heapSize) && (arr[l-1] > arr[i-1]))
	{
		largest = l;
	}
	else
	{
		largest = i;
	}

	if ( (r<= heapSize) && (arr[r-1] > arr[largest-1]))
	{
		largest = r;
	}
	if (largest != i)
	{
		int temp = arr[i-1];
		arr[i-1] = arr[largest-1];
		arr[largest-1] = temp;
		arr = maxheapify(arr,heapSize,largest);
	}
	return arr;
}

int* buildMaxHeap(int arr[], int arrSize)
{
	int heapSize = arrSize;
	for (int i=floor(arrSize/2); i>0; i--)
	{
		arr = maxheapify(arr, heapSize,i);	
	}
	return arr;
}

int* heapSort(int arr[], int arrSize, int heapSize)
{
	arr = buildMaxHeap(arr, arrSize);
	for (int i = arrSize; i >1; i--)
	{
		int temp = arr[0];
		arr[0] = arr[i-1];
		arr[i-1] = temp;
		heapSize--;
		arr = maxheapify(arr, heapSize, 1);
	}

	return arr;
}
