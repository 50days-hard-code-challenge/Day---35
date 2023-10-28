class Solution {
public:
    bool check(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL)
        {      return 1;
        }
        if(l==NULL){
            return 0;
        }
        if(r==NULL){
            return 0;
        }
        bool r1=check(l->left,r->right);
        if(r1==0){
            return 0;
        }
        if(l->val!=r->val){
            return 0;
        }
        bool r2= check(l->right,r->left);
        if(r2==0){
            return 0;
        }
        return 1;
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};
