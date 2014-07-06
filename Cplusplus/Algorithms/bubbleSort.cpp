
int* bubbleSort(int arr[], int sizeArr)
{
	int temp;
	bool swapped = true;
while (swapped)
{
swapped = false;
	for (int i=0;i<sizeArr-1; i++)
	{	
		if (arr[i] > arr[i+1])
		{
			swapped = true;
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;	
		}	 
	}
}
return arr;
}

