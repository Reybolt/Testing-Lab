function [sortedArray] = insertionSort(array)
%% This function sorts a given array by method of insertion. 

    sortedArray = array(1);
    %Array is size 1
    if sortedArray(1) < array(2) 
        sortedArray = [sortedArray array(2)];
    else
    	sortedArray = [array(2) sortedArray];
    end
    for indI = 3:length(array)
            if (sortedArray(1) > array(indI))
                sortedArray = [array(indI) sortedArray];
            elseif (sortedArray(end) < array(indI))
                sortedArray = [sortedArray array(indI)];
            else 
               for indJ =  1:length(sortedArray);
                   %Array larger than size 1
                    if (sortedArray(indJ) < array(indI) && array(indI) < sortedArray(indJ+1))
                        %insert into sorted array at this location
                        sortedArray = [sortedArray(1:indJ) array(indI) sortedArray(indJ+1:end)];
                        break
                    end
               end
            end
    end
end
