struct  Node
{
    int val;
    Node* left;
    Node* right;
    Node(int value):val(value),left(NULL),right(NULL){};
};

void preOrder(Node* root){
    if(root){
        cout<<root->val;
        preOrder(root->left);
        preOrder(root->right);
    }
}
void preOrder1(Node* root){
    if(root == NULL)
        return;
    stack<Node*> nstack;
    nstack.push(root);
    while(!nstack.empty()){
        Node* temp = nstack.top();
        cout<<temp->val;
        nstack.pop();
        if(temp->right){
            nstack.push(temp->right);
        }
        if(temp->left){
            nstack.push(temp->left);
        }
    }
}
