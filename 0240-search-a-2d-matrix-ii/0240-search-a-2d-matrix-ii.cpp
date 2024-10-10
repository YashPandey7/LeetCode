class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        for(int i=0; i<r; i++){
            if(matrix[i][0] > target || matrix[i][c-1] < target){
                continue;
            }
            int l = 0;
            int h = c-1;
            while(l <= h){
                int mid = l + (h-l)/2;
                if(matrix[i][mid] == target){
                    return true;
                }
                else if(matrix[i][mid] > target){
                    h = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
        }
        return false;
    }
};