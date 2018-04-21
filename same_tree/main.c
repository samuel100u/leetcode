/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    
    if(!p && !q) return true;
    
    if(p!=0 && q==0) return false;
        
    if(q!=0 && p==0) return false;
    
    if(p->val != q->val){
        
        return false;
    }
    
    bool l  = isSameTree(p->left,q->left);
    
    if(!l) return false;
    
    bool r  = isSameTree(p->right,q->right);
    
    if(!r) return false;
    
    return true;

}
