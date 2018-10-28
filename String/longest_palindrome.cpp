class Solution {
public:
    string longestPalindrome(string s) {
        int left;
        int right;
        string output;
        int ans=0;
        int len=s.length();
        if((s.length()==0)||(s.length()==1)){
            return s;
        }
            for(int mid=0;mid<=2*len-1;++mid){
            left=mid/2;
            right=left+mid%2;
            while((left>=0)&&(right<s.length())&&(s[left]==s[right]))
            {
                ans++;
                int substr_len=right-left+1;
                string output1=s.substr(left,substr_len);
                if(output1.length()>output.length())
                {
                    output=output1;
                }
                left--;
                right++;
                
            }
            
        }
        return output;
        
    }
};