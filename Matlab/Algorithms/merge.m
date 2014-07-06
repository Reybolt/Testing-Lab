function [array] = merge(array, p, q, r)
%% This function combines two sorted arrays. 

    n = q - p + 1;
    m = r -q;
    L = array(p:p+n-1);
    R = array(q+1:q+m);
    L(end+1) = inf;
    R(end+1) = inf;
    i = 1;
    j = 1;
    for k = p:r
       if L(i) <= R(j) 
        array(k) = L(i);
        i = i+1;
       else
           array(k) = R(j);
           j = j+1;
       end
    end

end