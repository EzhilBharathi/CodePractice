#include <unordered_map>
class Solution {
public:
vector<string> findWords(vector<string>& words) {
vector<string> output;
unordered_map<char, int> ht;
    vector<string>  char_row={"QWERTYUIOP","ASDFGHJKL","ZXCVBNM"};
    for (int i=0;i<char_row.size();i++)
    {
        for (int j=0;j<char_row[i].size();j++)
     {
        
         char each_letter=char_row[i][j];
            ht[each_letter]=i+1;
             ht[tolower(each_letter)]=i+1;
            
            
      }
    }

for (int i=0;i<words.size();i++)
{
int k;
for (int j=0;j<words[i].size();j++)
{ 
if (j==0)
{
k = (ht[words[i][j]]);
if (j==words[i].size()-1)

{ 
output.push_back(words[i]);

}
}
else
{ 
if(ht[words[i][j]]==k)
{ 
if (j==words[i].size()-1)

{ 
output.push_back(words[i]);

}
}

else
break; 
}
} 


}
return output; 
}
};

int main()
{
    Solution s1;
    vector<string> s={"a","b"};
    vector<string> result=s1.findWords(s);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }
    return 0;
}