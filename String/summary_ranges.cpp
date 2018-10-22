
#include <bits/stdc++.h>

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
         string s;
        if(!(nums.size()>0))
        {   
            
            return output;
        }
        int start=nums[0];
        int start_index=0;
        int end=nums[0];
        
       
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==(start+(i-start_index)))
            {
                end=nums[i];
                
            }
            else
            {   
                if(start==end)
                {   s=to_string(start);
                }
                else
                { 
                    s=to_string(start) + "-" + ">" + to_string(end);
                }
                if(i!=0)
                {
                    output.push_back(s);
                    start=nums[i];
                    start_index=i;
                    end=nums[i];
                }
            }
              
        }
               if(start==end)
                {
                    s=to_string(start);
                }
                else
                { s=to_string(start) + "-" + ">" + to_string(end);
                }
            output.push_back(s);
        return output;
        
    }
};