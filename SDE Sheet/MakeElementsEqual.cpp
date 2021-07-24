/*
You have an array arr of length n where arr[i] = (2 * i) + 1 for all valid values of i (i.e. 0 <= i < n).
In one operation, you can select two indices x and y where 0 <= x, y < n and subtract 1 from arr[x] and add 1 to arr[y]
(i.e. perform arr[x] -=1 and arr[y] += 1). The goal is to make all the elements of the array equal. 
It is guaranteed that all the elements of the array can be made equal using some operations.
Given an integer n, the length of the array. Return the minimum number of operations needed to make all the elements of arr equal.
*/

class Solution {
public:
    int minOperations(int n) {
  
        //Case 1 --  When n is odd
        //  n = 5 -----   1  3  5  7  9 ....ops are like : 2+4..    total (n-1)/2 ops reqd
        // AP sum of  N elements where N = (n-1)/2;
        // S = N*[2*2 + (N-1)*2]/2 =N*(N+1); 
            
        // Cas2 ----WHen n is even, S = N*N
      
        int N = 0;
        if(n&1){
            int N = (n-1)/2;
            return N*(N+1);
        }
        N = n/2;
        return N*N;
    }
};
//TC--->O(1)
//SC--->O(1)
