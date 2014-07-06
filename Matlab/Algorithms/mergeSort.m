function [array] = mergeSort(array, p, r)
%% This function sorts a given array by merge sort. Recursively
% splits the problem in two smaller arrays 

    if p < r
       q = floor((p+r)/2);
       array = mergeSort(array,p,q);
       array = mergeSort(array,q+1,r);
       array = merge(array,p,q,r);
    end


end