#include <iostream>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "mergeSort.h"

int main()
{
	using namespace std;
	int sizeArr = 10;
	int start = -50;
	int end = 50;
	int diff = start - end;
	int *sortedArray;
	int arr[sizeArr]; 
	/* int arr[7] = {-3, 10, 1, -20, 17, 14, -5};*/
	cout << "Unsorted array:" << endl;
	for (int i=0; i<sizeArr; i++)
	{
		arr[i] = rand()%diff + start ;
		cout << arr[i]<< ", ";
	}
	cout << endl << "Sorted array:" << endl;
	sortedArray = mergeSort(arr, sizeArr,1,sizeArr);
	for (int i = 0;i < sizeArr; i ++)
	{
		cout << sortedArray[i] << ", " ;
	} 
	cout << endl; 
	return 1;

}
