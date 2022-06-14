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
    int ans = 0;
    queue<Tree*> q;
    Tree *t = root;
    q.push(root);

    while(!q.empty()){
        t = q.front();
        q.pop();

        if(t->right)
            q.push(t->right);
        if(t->left)
            q.push(t->left);
        if((t->left || t->right) && (t->right) && (!t->right->left && !t->right->right)){
            ans += t->right->val;
        }
    }
    return ans;
}
