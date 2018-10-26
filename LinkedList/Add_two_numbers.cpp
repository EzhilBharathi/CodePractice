#include <bits/stdc++.h>
class Solution {
public:
    ListNode *head,*tail;
    void createnode(int value)
    {
      ListNode *temp=new ListNode(value);
      
      if(head==NULL)
      {
        head=temp;
        tail=temp;
        temp=NULL;
      }
      else
      {	
        tail->next=temp;
        tail=temp;
      }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *current1=l1;
        ListNode *current2=l2;
        vector<int> v1,v2,v3;
        if((l1==NULL) && (l2==NULL))
            return l1;
        while(current1!=NULL)
        {
           v1.push_back(current1->val);
            current1=current1->next;
            
        }
         while(current2!=NULL)
        {
             v2.push_back(current2->val);
                 current2=current2->next;
            
        }
         int len=(v1.size()>=v2.size())?v1.size():v2.size();
         bool carry=0;
        int c1,c2;
        for(int i=0;i<len;i++)
        {  
            if((i< (v1.size())) && (i< (v2.size())))
            {
                 c1=v1[i]+v2[i]+carry;
                              
            }
            else if((i< (v1.size())) && (i>= (v2.size())))
            {
                 c1=v1[i]+carry;
                              
            }
            else 
            {
                 c1=v2[i]+carry;
                              
            }
         
            if(c1>=10)
            {
                 c2=c1 %10;
                carry=1;
            }
         
            else
            {
                c2=c1;
                carry=0;
                
            }
             createnode(c2);  
           
         
         
        }
         if(carry!=0)
           createnode(carry); 
        return head;
        
        
    }
};