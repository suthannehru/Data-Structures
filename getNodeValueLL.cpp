int GetNode(Node *head,int positionFromTail)
{
     Node* temp = (Node*)malloc(sizeof(Node));
    Node* c = (Node*)malloc(sizeof(Node));
    temp = head;
    c = head;
    for(int i = 0; i <= positionFromTail; i++){
        c = (*c).next;
    }
    while(c != NULL){
        temp = (*temp).next;
        c = (*c).next;
    }
    return (*temp).data;
    
}