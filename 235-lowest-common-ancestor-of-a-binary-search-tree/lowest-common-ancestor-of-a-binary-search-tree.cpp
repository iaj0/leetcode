class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* temp = root;
        TreeNode* current = root;
        TreeNode* ancestor = nullptr;

        if(root == NULL){
            return nullptr;
        }
        //find lowest ancestor
        while (true){
            if(p -> val < current -> val && q -> val < current -> val){
                current = current -> left;
            }
            else if (p -> val > current -> val && q -> val > current -> val){
                current = current -> right;
            }
            else{
                break;
            }
        }
        return current;
   
   
   
   
   
    }
};