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

Node *deleteNode(Node *&head, int pos)
{
    Node* head2= head;
    int len=0;
    while(head2!=NULL){
        head2 = head2->next;
        len++;
    }
    if(len<=pos){
        return head;
    }
    int cnt=0;
    if(pos==0){
        head = head->next;
        return head;
    }
    else{
        Node* curr = head;
        Node* pre = NULL;
    while(cnt<pos){
        
        //head2= head2->next;
        pre = curr;
        curr= curr->next;
        
        if(curr->next==NULL){
            break;
        }
        cnt++;
    }
        pre->next= curr->next;
       // curr->next=NULL;
        
    }
    return head;
    
    // Write your code here.
}
