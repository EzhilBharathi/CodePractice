#include <iostream>
#include <unordered_map>
#include <string>
#include<bits/stdc++.h>

using namespace std;


bool isValid(string s) {
    stack<char> check_stack;
    for (int i=0;i<s.length();i++)
    {
        if ((s[i]=='(')||(s[i]=='[')||(s[i]=='{'))
        {
            check_stack.push(s[i]);

        }
        else
        {
            if ((s[i]== ')') && (!check_stack.empty())&& (check_stack.top()=='('))
                check_stack.pop();
            else if  ((s[i]== ']') && (!check_stack.empty()) && (check_stack.top()=='['))
                check_stack.pop();
            else if  ((s[i]== '}') && (!check_stack.empty()) && (check_stack.top()=='{'))
                check_stack.pop();
            else
                return false;
        }
    }
    if(check_stack.empty())
        return true;
    else
        return false;

}
int main()
{
    string s="]";
    bool result=isValid(s);
    cout<<result;
    return 0;
}
