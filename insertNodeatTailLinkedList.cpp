Node* Insert(Node *head,int data)
{
    Node* n = (Node*)malloc(sizeof(Node));
    (*n).data = data;
    (*n).next = NULL;
    Node* temp = (Node*)malloc(sizeof(Node));
    if(head == NULL){
        head = n;
        return head;
    }
    else{
        temp = head;
        while((*temp).next != NULL){
            temp = (*temp).next;
        }
        (*temp).next = n;
        return head;
    }
}
