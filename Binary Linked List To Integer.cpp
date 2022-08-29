#include<math.h>
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

int binaryToInteger(int n, Node *head) {
    Node* temp = head;
    int len=-1;
    while(temp!=NULL){
        temp= temp->next;
        len++;
    }
    int res=0;
    
    while(len>=0){
        res+=head->data*pow(2,len);
        len--;
        head= head->next;
    }
    return res;
    //    Write your code here
}
