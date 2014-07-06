function [array] = bubbleSort(array)
%% This function sorts a given array by bubble sort. 

swapped = true;

while swapped
    swapped = false;
    for i = 1:length(array)-1
        if array(i) > array(i+1)
            swapped = true;
           temp = array(i);
           array(i) = array(i+1);
           array(i+1) = temp;
        end
    end
end


end