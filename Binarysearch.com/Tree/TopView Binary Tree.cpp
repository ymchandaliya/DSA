/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {

    queue<pair<int,Tree*>> q;
    q.push({0,root});
    pair<int,Tree*> t = q.front();
    map<int,Tree*> m;

    while(!q.empty()){
        t = q.front();
        q.pop();
        if(t.second->left){
            int pos = t.first - 1;
            q.push({pos,t.second->left}); 
        }
        if(t.second->right){
            int pos = t.first + 1;
            q.push({pos,t.second->right});
        }

        if(m.find(t.first)==m.end()){
            m[t.first] = t.second;
        }
    }
    vector<int> ans;
    for(auto it = m.begin();it!=m.end();it++)
        ans.push_back(it->second->val);

    return ans;
}
