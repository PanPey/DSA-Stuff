/*48. Rotate Image
Medium
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        
        for(int i=0; i<m.size(); i++){
            for(int j=i; j<m[0].size(); j++){
                 swap(m[i][j], m[j][i]);
            }
         }
        
        for(int i=0; i<m.size(); i++){
            reverse(m[i].begin(), m[i].end());
        }
        
    }
};

//TC--->O(m*m)
//SC--->O(1)
