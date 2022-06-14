/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if(node==NULL)
        return node;
    if(node->next==NULL)
        return node;
    LLNode *t1 = node;
    LLNode *t2 = node->next;
    LLNode *t3;
    LLNode *nnode;
    t3 = t2->next;
    //cout<<t3->next->val<<endl;
    t2->next = t1;
    t1->next = t3;
    //cout<<t1->next->val;
    node = t2;
    nnode = t2;
    LLNode *prev = nnode->next;
    nnode = nnode->next->next;
    cout<<nnode->val;
    while(nnode && nnode->next){
        t1 = nnode;
        t2 = nnode->next;
        t3 = t2->next;
        t2->next = t1;
        t1->next = t3;
        prev->next = t2;
        nnode = t2;
        if(nnode->next)
            prev = nnode->next;
        nnode = nnode->next->next;
    }

    return node;
}
