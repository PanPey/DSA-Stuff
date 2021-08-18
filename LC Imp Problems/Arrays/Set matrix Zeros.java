/*
Set Matrix Zeroes
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

You must do it in place.
*/
class Solution {
    public void setZeroes(int[][] matrix) {
        
        int rows = matrix.length;
        int cols = matrix[0].length;
        boolean fr=false, fc = false;
        
        for(int i=0; i<rows; i++){
            if(matrix[i][0] == 0)
                fc = true;
        }
        
        for(int i=0; i<cols; i++){
            if(matrix[0][i] == 0)
                fr = true;
        }
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=1; i<rows; i++){
            for(int j=1; j<cols; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        if(fr){
            for(int i=0; i<cols; i++){
                matrix[0][i] = 0;
            }
        }
        
        if(fc){
            for(int i=0; i<rows; i++){
                matrix[i][0] = 0;
            }
        }
        
    }
}

// TC ---> O(n*m)
// SC ---> O(1)
