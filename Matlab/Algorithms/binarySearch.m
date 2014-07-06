function [imid] =  binarySearch(array, value, imin, imax, recursion)
%%  This function implements binary search on an array given the value of interest

    if ~recursion 
        %Iterative method
        flagFound = 0;
        while imax >= imin
            imid = floor((imax + imin)/2);
            if (array(imid) == value)
                fprintf('Value has index: %d. \n', imid);
                flagFound = 1;
                break
            elseif (array(imid) < value)
                fprintf('Value is located in right half, midpoint value = %d. \n', array(imid));
                imin = imid + 1;
            elseif (array(imid) > value)
                fprintf('Value is located in left half, midpoint value = %d. \n', array(imid));
                imax = imid - 1;
            end
        end
        if ~flagFound
            fprintf('Value not in array.\n');
        end
    elseif recursion  
        %Recursive method
        imid = floor((imax + imin)/2);
        if imin > imax
            fprintf('Value not in array');
        else
            if (array(imid) == value)
                fprintf('Value has index: %d. \n', imid);
            elseif (array(imid) < value)
                fprintf('Value is located in right half, midpoint value = %d. \n', array(imid));
                imid = binarySearch(array, value, imid+1, imax, recursion);
            elseif (array(imid) > value)
                fprintf('Value is located in left half, midpoint value = %d. \n', array(imid));
                imid = binarySearch(array, value, imin, imid-1, recursion);
            end
        end
    end
end