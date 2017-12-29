static Node Insert(Node root,int value) {
        Node current = root;
        Node n = new Node();
        n.data = value;
        n.left = null;
        n.right = null;
        if(root == null){return n;}
        Node prev = null;
        while(current != null){
            if(value <= current.data)
            {
                prev = current;
                current = current.left;
            }
            else{
                prev = current;
                current = current.right;
            }
        }
  
        if(value <= prev.data){
            prev.left = n;
        }
        else{
            prev.right = n;
        }
       return root;
    }