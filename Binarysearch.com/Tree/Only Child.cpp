/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if(root==NULL)
        return 0;
    queue<Tree*> q;
    q.push(root);
    Tree *t = root;
    int ans = 0;

    while(!q.empty()){
        t = q.front();
        q.pop();
        if(t->left)
            q.push(t->left);
        if(t->right)
            q.push(t->right);
        
        if((t->left && !t->right) || (t->right && !t->left))
            ans++;
    }

    return ans;
}
