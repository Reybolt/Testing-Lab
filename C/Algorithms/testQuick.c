

#include <stdio.h>
#include "quickSort.h"

int main()
{
	int arr[10] = {16, 15, 10, 8, 6, 9, 3, 2, 4, 1};
	int *sortedArray;
	sortedArray = quickSort(arr,1,10);
	printf("Sorted Array:\n"); 
	for (int i=0; i<10; i++)
	{
		printf("%5d, ", sortedArray[i]);
	}
	printf("\n");
	return 1;
}
