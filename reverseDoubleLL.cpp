Node* Reverse(Node* head)
{
    if(head ==  NULL){return head;}
    Node* current;
    Node* next;
    Node* prev;
    prev = head->prev;
    current = head;
    next = current->next;
    while(next != NULL){
        current->next = prev;
        current->prev = next;
        if(prev != NULL){prev->prev = current;}
        prev = current;
        current = next;
        next = next->next;
    }
    if(prev !=  NULL){prev->prev = current;}
    current->next = prev;
    current->prev = NULL;
    return current;
}
