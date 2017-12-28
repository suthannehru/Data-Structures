Node* RemoveDuplicates(Node *head)
{
   Node* temp;
   Node* prev;
   temp = head;
   prev = head;
   if(head == NULL){return head;}
   int val = temp->data;
   temp = temp->next;
   while(temp != NULL){
       if(temp->data == val){
           prev->next = temp->next;            
       }
       else{
          val = temp->data;
          prev = temp;    
       }       
       temp = temp->next;       
   }
    return head;
    
}