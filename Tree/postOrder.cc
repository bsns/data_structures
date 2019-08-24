void posOrder(Node* root){
    if(root){
        posOrder(root->left);
        posOrder(root->right);
        cout<<root->val;
    }
}
void posOrder1(Node* root){
    stack<pair<Node*,bool> > nstack;
    bool visited;
    nstack.push(make_pair(root,false));
    while(!nstack.empty()){
        root = nstack.top().first;
        visited = nstack.top().second;
        nstack.pop();
        if(root == NULL)
            continue;
        if(visited )
        {
            cout<<root->val;
        }else
        {
            nstack.push(make_pair(root,true));
            nstack.push(make_pair(root->right,false));
            nstack.push(make_pair(root->left,false));
        }

    }
}
