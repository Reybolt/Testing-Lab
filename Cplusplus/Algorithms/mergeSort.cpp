#include <math.h>
#include "mergeSort.h"

int* mergeSort(int arr[], int sizeArr, int p, int r)
{
int q;
	if (p <r)
	{
		q = floor((p+r)/2);
		arr = mergeSort(arr,sizeArr,p,q);
		arr = mergeSort(arr,sizeArr,q+1,r);
		arr = merge(arr,sizeArr,p,q,r);
	}
return arr;
}



int* merge(int arr[], int sizeArr, int p, int q, int r)
{
int n = q-p+1;
int m = r-q;

int L[n+1], R[m+1];
for (int i=0; i<n; i++)
{
	L[i] = arr[p+i-1];
}

for (int j=0; j<m; j++)
{
	R[j] = arr[q+j];
}
L[n] = 1000000000;
R[m] = 1000000000;
int i = 0;
int j = 0;
for (int k=p-1; k<r; k++)
{
	if (L[i] <= R[j])
	{
		arr[k] = L[i];
		i++;
	}
	else
	{
		arr[k] = R[j];
		j++;
	}	
}
return arr;
}
