void preOrder(node *root) {
    if(root == NULL){return;}
    else if(root->left == NULL && root ->right == NULL){
        cout << root->data<<" ";
        return;
    }
    else{
        cout<<root->data<<" ";
        if(root->left != NULL){preOrder(root->left);}
        if(root->right != NULL){preOrder(root->right);}
    }
}