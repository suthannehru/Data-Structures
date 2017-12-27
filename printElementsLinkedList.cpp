void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node *temp = (Node*)malloc(sizeof(Node));
    temp = head;
    while(temp != NULL){
        cout<< (*temp).data <<endl;
        temp = (*temp).next;
    }
}