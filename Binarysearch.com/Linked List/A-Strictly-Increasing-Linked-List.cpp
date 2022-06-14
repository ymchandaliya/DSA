/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {

    while(head->next){
        if(head->val>=head->next->val)
            return 0;
        head = head->next;
    }

    return 1;
}
