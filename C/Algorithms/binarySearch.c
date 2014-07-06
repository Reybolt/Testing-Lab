
#include <stdio.h>
#include <math.h> 

int binarySearch(int numarray[],int value, int imin, int imax);


int binarySearch(int numarray[], int value, int imin, int imax)
{
int imid;
while (imin <=imax)
{
    imid = (int)(floor((double)(imin) + (double)(imax))/2);
    if (numarray[imid] == value)
    {
        return imid;
    }
    else if (numarray[imid] < value)
    {
        imin = imid + 1;
    }
    else if (numarray[imid] > value)
    {
        imax = imid - 1;
    }
}
    printf("Value not in array. \n");
    return -1;
}
 
/* This program runs binarySearch */ 
int  main(void)
{
    int index;
    int value = 7;
    int numarray[10] = {1,2,3,4,5,6,7,8,9,10};  	 
    index = binarySearch(numarray, value, 1, 10); 
    if (index >=0) 
    {
    	printf("Value %5d is at index %5d \n", numarray[index], index);
    } 
   return 0;
}
