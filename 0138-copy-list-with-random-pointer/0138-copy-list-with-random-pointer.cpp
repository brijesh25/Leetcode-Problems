/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur=head,*temp;
        if(head == NULL)
            return head;
        while(cur){
            temp=cur->next;
            cur->next=new Node(cur->val);
            cur->next->next=temp;
            cur=temp;
        }
        
        cur=head;
        
        while(cur){
            cur->next->random = cur->random ? cur->random->next : cur->random;
            cur=cur->next->next;
        }
        
        Node* ori=head,*copy=head->next;
        temp=copy;
        
        while(ori and copy){
            ori->next= ori->next->next;
            copy->next=copy->next?copy->next->next : copy->next;
            ori=ori->next;
            copy=copy->next;
        }
        return temp;
    }
};