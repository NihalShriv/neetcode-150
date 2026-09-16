class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0;
        int right=matrix[0].size()-1;
        int mid_col=0;
        int row=0;
        int top=0;
        int bottom=matrix.size()-1;
        while(top<=bottom){
            row=(top+bottom)/2;
            if(target<matrix[row][0]){
                bottom = row-1;
            }
            else if(target>matrix[row][matrix[0].size()-1]){
                top = row+1;
            }
            else{
                break;
            }
        }
        if(top>bottom){
            return false;
        }
        while(left<=right){
            mid_col = left + (right-left)/2;
            if(matrix[row][mid_col] == target){
                return true;
            }
            else if(matrix[row][mid_col] > target){
                right = mid_col-1;
            }
            else{
                left = mid_col+1;
            }
        }
        return false;
    }
};
