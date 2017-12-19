int CompareLists(Node headA, Node headB) {
    // This is a "method-only" submission. 
    // You only need to complete this method 
    Node a = headA; String one = "";
    Node b = headB; String two = "";
    while(a != null){
        one += a.data+" ";
        a = a.next;
    }
    while(b != null){
        two += b.data+" ";
        b = b.next;
    }
    return (one.compareTo(two) == 0) ? 1:0;
  
}