class Solution {
public:
    string reverseString(string s) {
        string output;
     int j=0;
    for(int i=(s.length())-1;i >= 0;i--)
      {  string output1= {s[i]};
         output.append(output1);
         
      } 
      return output;
    }
};