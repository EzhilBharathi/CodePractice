class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int,vector<int>> nums_mat;
        for(int i=0;i<nums.size();i++)
        {
           if (nums_mat[nums[i]].size()==0)
           {
               vector<int> current(3,0);
               current[0]=current[0]+1;
               current[1]= current[2]=i;
               nums_mat[nums[i]]=current;
    
           }
            else
            {
                 vector<int> current=nums_mat[nums[i]];
                  current[0]=current[0]+1;
                  current[2]=i;
                 nums_mat[nums[i]]=current;
                  
            }             
            
        }
        int max=INT_MIN;
        int min_len;
       
       for(auto itr=nums_mat.begin();itr!=nums_mat.end();itr++)
       {
           vector<int> current=(*itr).second;
            if (current[0]==max)
           {
              
              if ((current[2]-current[1]) < min_len)
              {
                  min_len=(current[2]-current[1]+1);
              }
              
            }
           if (current[0] > max)
           {
               max=current[0];
               min_len=current[2]-current[1]+1;
              
            }
       }
        
        return min_len;
    }
};