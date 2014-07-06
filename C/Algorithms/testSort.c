
#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
int main(void)
{
	int sizeArr = 10;
	int start = -50;
	int end = 50;
	int diff = start - end;
	int *sortedArray;
	int arr[sizeArr]; 
	/* int arr[7] = {-3, 10, 1, -20, 17, 14, -5};*/
	printf("Unsorted array:\n");
	for (int i=0; i<sizeArr; i++)
	{
		arr[i] = rand()%diff + start ;
		printf(" %5d, ",arr[i]);
	}
	printf("Sorted array:\n");
	sortedArray = mergeSort(arr, sizeArr,1,sizeArr);
	//sortedArray = insertionSort(arr, sizeArr);
	for (int i = 0;i < sizeArr; i ++)
	{
		printf(" %5d,", sortedArray[i]) ;
	} 
	printf("\n"); 
	return 1;

}
