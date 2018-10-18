class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current=head;
         if(head==NULL)
             return NULL;
        while (current->next!=NULL)
        {
            
            ListNode* temp=current->next;
            current->next=temp->next;
            temp->next=head;
            head=temp;
            
            
        }
        return head;
        
    }
};