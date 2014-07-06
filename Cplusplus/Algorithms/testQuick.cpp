
#include <iostream>
#include "quickSort.h"

int main()
{
	using namespace std;
	int arr[10] = {16, 15, 10, 8, 6, 9, 3, 2, 4, 1};
	int *sortedArray;
	sortedArray = quickSort(arr,1,10);
	for (int i=0; i<10; i++)
	{
		cout << sortedArray[i] << ", ";
	}
	cout << endl;
	return 1;
}
