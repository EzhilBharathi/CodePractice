#include <bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        multimap<int,int> ht;
         typedef std::multimap<int, int>::iterator ht_it;
        if(nums.size()==0)
            return output;
        else
        {   for(int i=0;i<nums.size();i++)
            {
               ht.insert(make_pair(nums[i], i));
             }
            sort(nums.begin(),nums.end());
            int left=0;
            int right=(nums.size())-1;
             while(left<right)
             {
                int sum=nums[left]+nums[right];
                 if(sum==target)
                 {   
                    
                     
                     
                     if (nums[left]!=nums[right])
                     {
                         ht_it it_f = ht.find(nums[left]); 
                          output.push_back(it_f->second);
                          ht_it it_s = ht.find(nums[right]); 
                         output.push_back(it_s->second);
        
                        } 
                      
                     else
                     {
                         	
                        	pair<ht_it, ht_it> pairs = ht.equal_range(nums[left]);
    	                    for (ht_it it = pairs.first; it != pairs.second; it++)
                                {
                                     output.push_back(it->second);
        
                                }
                     }
                     
                     return output;
                 }
                 else if(sum>target)
                     right--;
                 else
                     left++;
             }
             return output;
            
        }
    }
    
};