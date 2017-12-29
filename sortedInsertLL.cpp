Node* SortedInsert(Node *head,int data)
{
    
    Node* t = new Node;
    t->data = data;   
   if(head == NULL){return t;}
    Node* c = head;    
    Node* n = head->next;
  
  
     
    if(data < c->data){
        t->next = c;
        t->prev = NULL;
        c->prev = t;
        return t;
    } 
    
    while(n != NULL)
    {
        if(data > c->data && data <= n->data){
            
            c->next = t;
            t->prev = c;
            t->next = n;
            n->prev = t;
            return head;
        }
        c = c->next;
        n = n->next;
        
    }
    c->next = t;
    t->prev = c;
    t->next = NULL;
    return head;    
    
}