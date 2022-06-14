/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    
    queue<Tree*> q;
    Tree *t = root;
    q.push(root);
    int x = root->val; 
    while(!q.empty()){

        t = q.front();
        q.pop();

        if(t->left)
            q.push(t->left);
        if(t->right)
            q.push(t->right);
        
        if(t->val!=x)
            return 0;
    }

    return 1;
}
