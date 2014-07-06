#include "quickSort.h"

int* quickSort(int arr[], int p, int r)
{
	if (p<r)
	{
		int q = partition(arr, p, r);
		arr = quickSort(arr, p, q-1);
		arr = quickSort(arr, q+1,r);
	}

return arr;
}

int partition(int arr[], int p, int r)
{
	int x = arr[r-1];
	int i = p-1;
	for (int j=p; j<r; j++)
	{
		if (arr[j-1] <= x)
		{
			i++;
			int temp = arr[i-1];
			arr[i-1] = arr[j-1];
			arr[j-1] = temp;
		}

	}
	int temp = arr[i];
	arr[i] = arr[r-1];
	arr[r-1] = temp;
	return (i+1);


}
