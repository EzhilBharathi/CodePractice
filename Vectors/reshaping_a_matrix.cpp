class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> output(r, vector<int>(c));
        if( (r*c)!=(( nums.size())*(nums[0].size())))
           {
               return nums;
           }  
           
          else if (nums.size()==0)
          {
              return nums;
          }
        else
           {   
                int inputRow=0;
                int  inputColumn=0;
               for(int i=0;i<r;i++)
               {
                   for(int j=0;j<c;j++)
                   
                     { 
                        if(inputColumn<(nums[0].size()))
                        {
                            output[i][j]=nums[inputRow][inputColumn];
                            inputColumn++;
                            }  
                         else
                         {
                             inputRow++;
                             inputColumn=0;
                              output[i][j]=nums[inputRow][inputColumn];
                              inputColumn++;
                             
                         }
                   }
                }
                   
           }
           return output;
    }
};