// Just xor all the elements of array and the ans will be single element present in the array
// Xor of two equal nmubers is 0
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xorr=0;
        for(int i=0; i<nums.size(); i++){
            xorr^=nums[i];
        }
        return xorr;
    }
};
// TC---> O(n) solution wih constant space


// Efficint sol using Binary Search
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int low=0, high=nums.size()-1, mid;
        
         while(low<high){
          mid = (low+high)/2;
           if(nums[mid] == nums[mid^1])
             low = mid+1;
           else
             high = mid;
        }
    return nums[low];      
    }
};
// TC--->O(logn)

