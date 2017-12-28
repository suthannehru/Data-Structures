Node* Insert(Node *head,int data)
{
    Node* n = new Node;
    n->data = data;
    n->next = NULL;
    Node* temp;
    if(head == NULL){
        head = n;
        return head;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        return head;
    }
}
