#include <unordered_map>
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> s_count;
        int j_count=0;
        if(J.length()==0||S.length()==0)
            return 0;
      for(int i=0;i<S.length();i++)
       {
           if(s_count[S[i]]==0)
           {
               s_count[S[i]]=1;
           }
          else
              s_count[S[i]]+=1;
       }
         for(int i=0;i<J.length();i++)
         {
             int out=s_count[J[i]];
             j_count+=out;
         }
        return j_count;
        
    }
};