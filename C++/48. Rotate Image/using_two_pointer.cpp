class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int low,high,temp;
        for (int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            low=0;
            high=matrix.size()-1;
                
            while(low<high){
                temp=matrix[i][low];
                matrix[i][low]=matrix[i][high];
                matrix[i][high]=temp;
                low++;
                high--;
            }
        }
    }
};