/*            Version1

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
*/

// binary search with imaginary index
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int x) {
        
        int n = a.size();
        int m = a[0].size();
        if(n==0) return false;
        
        int low = 0, high = (n*m) - 1;
      
        while(low<=high){
          int mid = (low + high)/2; // can casue int oveflow use low + (high-low)/2
          
          if(a[mid/n][mid%m] == x) // rowth index is given by mid/n and colth index by mid%m
              return true;
          else if(a[mid/n][mid%m] > x){
            high = mid-1;   
          }
            else
                low = mid + 1;
      }
        
        return false;
    }
};

// TC--->O(log(n*m))
// SC--->O(1)



/*           Version2

Search in a row wise and column wise sorted matrix */

// two pointer apprach
class Solution {
public:

    bool searchMatrix(vector<vector<int>>& a, int x) {
        
        int n = a.size(), m = a[0].size();
        int i=0; //points to first row
        int j=m-1; //points to last column
        while(i<n && j>=0) //checkig out of bounds condition
        {
            if(a[i][j] == x){
                return true;
            }
            else if (a[i][j] > x){
                j--;
            }
            else
                i++;
        }
 
        return false;
                
    }
};

// TC--->O(n)
// SC--->O(1)


