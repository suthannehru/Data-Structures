boolean hasCycle(Node head) {
    if(head == null){return false;}
    Node slow = head;
    Node fast = head;
    while(fast.next!= null){
        slow = slow.next;       
        fast = fast.next.next;
        if(fast == null){return false;}
        if(slow.equals(fast)){return true;}
        
    }
    return false;
}