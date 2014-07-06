%% Main file. Used to run algorithms

clear all
array = 1:4:100;
value = 84;
recursion = 0;
imin = 1;
imax = length(array);
[index] = binarySearch(array, value, imin, imax, recursion)