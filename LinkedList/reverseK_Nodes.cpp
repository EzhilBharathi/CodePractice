/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* current=head;
         ListNode* prev=head;
        ListNode* temp;
        int count=0;
        ListNode* prev_iter=NULL;
        int valid_len;
         ListNode* valid=current;
        if(head==NULL)  //checking empty list condition
            return NULL;
        else{
            
        while (current->next!=NULL) //checking termination condition
        {   valid_len=0;
            valid=current;
            for(int j=1;j<k;j++)
            {  if(valid->next!=NULL)
                {
                valid_len++;
                valid=valid->next;
                  
               }
            }
            
            for(int i=1;i<k;i++)
                
            {   if ((current->next!=NULL)&&(valid_len==k-1)) //checking presence of  next k nodes to do reversal 
               {
                temp=current->next;
                
                current->next=temp->next;
                
                temp->next=prev;
                prev=temp;
                if(prev_iter!=NULL)
                {
                    prev_iter->next=prev;
                } 
            }
                            
            }
            count++;
            if (count==1)
            { 
                head=prev;
            }
            if(current->next!=NULL)
            
            {
                prev_iter=current;
                current=current->next;
                prev=current;
                
            }
            
            
        }
        return  head;
        }
    }
};