Node mergeLists(Node headA, Node headB) {
    Node a = headA;
    Node b = headB;
    Node prev = null;

    if(a == null || b == null)
    {
        if(a == null){
            return headB;
        }
        else{
            return headA;
        }
    }
    
    while(b != null)
    {                  
       a = headA;
       prev = null;
       Node n = new Node();        
       do{
           if(a != null){
               if(b.data < a.data && prev == null){                   
                   n.data =  b.data;
                   n.next = a;                   
                   headA = n;
                   break;
               }
               else if(b.data < a.data && prev != null){                  
                  n.data =  b.data;                   
                  prev.next = n;
                  n.next = a;
                  break;
               }
               else{
                   prev = a;
                   a = a.next;
               }
               
           }
           else{               
               n.data =  b.data;               
               prev.next = n;
               n.next = null;
               break;
           }
       }while(true);
       b = b.next;
    }        
    return headA;

}
