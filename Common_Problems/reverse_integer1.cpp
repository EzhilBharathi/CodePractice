#include <bits/stdc++.h>
#include <cstdlib>
class Solution {
public:
    int reverse(int x_in) {
         if((x_in <= INT_MIN) || (x_in >= INT_MAX))
            return 0;
        int output=0;int out;
        bool negative=x_in < 0;
        int x=abs(x_in);
        x_in=x;
       if((x_in>-9)&&(x_in<9))
           return x_in;
        while((x/10)!=0)
        {
            out=x%10;
            
            
            if((x==x_in)&&(out!=0))
            {
                output=out;

            }
            else if((x==x_in)&&(out==0))
            {                //
            }
            else
            {
                if((INT_MAX/10)>output)
              {      
                output*=10;
                if((INT_MAX-out)>output)
                     output+=out;
                else
                    return 0;
              }
             else
                 return 0;
            }
            x=x/10;
            
        }
        
        if((INT_MAX/10)>output)
        {   out=x%10;
            output*=10;
            if((INT_MAX-out)>output)
                     output+=out;
                else
                    return 0;
            
            if(negative)
                output = -output;
            return output;
        }
        else 
            return 0;
    }
};