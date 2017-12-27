void Print(Node *head)
{

    Node *temp = (Node*)malloc(sizeof(Node));
    temp = head;
    while(temp != NULL){
        cout<< (*temp).data <<endl;
        temp = (*temp).next;
    }
}