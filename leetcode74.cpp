class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = -1;
        //if(matrix.size()==1)
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][matrix[i].size()-1] == target){
                cout << "123\n";
                return true;
            }
            if(matrix[i][matrix[i].size()-1] > target){
                row = i;
                break;
            }
            
        }
        if(row==-1)
            return false;
        
        int left =0 , right = matrix[row].size()-1;
        int mid = 0;
        while(left <= right){
            mid = left + (right-left)/2;
            //cout << matrix[row][mid] << endl;
            if(target>matrix[row][mid])
                left = mid+1;
            else if(target < matrix[row][mid])
                right = mid-1;
            else if (target == matrix[row][mid]){
                //cout << mid << endl;
                return true;
            }
        }
        return false;
    }
};
