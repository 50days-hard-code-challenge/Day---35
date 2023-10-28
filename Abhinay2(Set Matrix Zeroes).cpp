class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>result;
        for(int i=0;i<matrix.size();i++)
        {   for(int j=0;j<matrix[0].size();j++){
              if(matrix[i][j]==0){
                 result.push_back({i,j});
              }
            }
        }
        int i=0;
        while(i<result.size())
        {
            for(int k=0;k<matrix[0].size();k++){
                matrix[result[i][0]][k]=0;
            }
            for(int p=0;p<matrix.size();p++){
                matrix[p][result[i][1]]=0;
            }
            i++;
        }
        result.clear();
    }
};
