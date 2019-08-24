void inOrder(Node* root){
    if(root){
        inOrder(root->left);
        cout<<root->val;
        inOrder(root->right);
    }
}
void inOrder1(Node* root){
    stack<Node*> nstack;
    Node* temp = root;
    while(temp || !nstack.empty()){
        if(temp){
            nstack.push(temp);
            temp = temp->left;
        }else
        {
            temp= nstack.top();
            cout<<temp->val;
            nstack.pop();
            temp = temp->right;
        }

    }

}
