/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    if(root==NULL){
        vector<int> a;
        a.push_back(0);
        a.push_back(0);

        return a;
    }
    queue<Tree*> q;
    Tree *t = root;
    q.push(root);   
    
    int l = 0;
    int nl = 0;
    while(!q.empty()){

        t = q.front();
        q.pop();
        if(t->left)
            q.push(t->left);
        if(t->right)
            q.push(t->right);
        if(t->left || t->right)
            nl++;
        else
            l++;

    }
    vector<int> ans;
    ans.push_back(l);
    ans.push_back(nl);

    return ans;
}


