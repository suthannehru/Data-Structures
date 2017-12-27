Node* Insert(Node *head,int data)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    (*temp).data = data;
    (*temp).next = NULL;
    if(head == NULL){
        head = temp;
        return head;
    }
    (*temp).next = head;
    return temp;
}