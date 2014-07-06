
int* insertionSort(int arr[], int sizeArr)
{
int j, temp;
	for (int i=1; i<sizeArr; i++)
	{
		j = i;
		while( (j>0) && (arr[j]<arr[j-1]))
		{
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}	
return arr;
}
