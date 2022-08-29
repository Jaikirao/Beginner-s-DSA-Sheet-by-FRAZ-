#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    Node* temp = head;
    int len=0;
    while(temp!=NULL){
        temp= temp->next;
        len++;
    }
    int mid = (len/2)+1;
    while(mid!=1){
        head= head->next;
        mid--;
    }
  //  Node* result = head;
    return head;
    // Write your code here
}
