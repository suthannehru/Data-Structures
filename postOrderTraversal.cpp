void postOrder(node *root) {
    if(root->left == NULL && root -> right == NULL){
        cout<<root->data<<" ";
        return;
    }
    if(root->left != NULL){postOrder(root->left);}
    if(root->right != NULL){postOrder(root->right);}
    cout<<root->data<<" ";
    return;

}