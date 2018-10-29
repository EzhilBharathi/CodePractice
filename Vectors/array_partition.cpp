
#include <bits/stdc++.h>
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        int output=0;
        sort(nums.begin(),nums.end());
        int len=nums.size();
       
        for(int i=0;i<len;)
        {
            output=nums[i]+output;
            i=i+2;
        }
       
        return output;
                  
    }
};