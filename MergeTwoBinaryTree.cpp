#include <iostream>
#include <string>
#include <cstdlib>
#include <set>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:

    //Constructor
    Solution() {
    }

    TreeNode* doMergeTrees(TreeNode* t1, TreeNode* t2){
        //assumed both are not null
        //root
        TreeNode *mtn;
        if(t1 && t2){
            mtn = new TreeNode(t1->val + t2->val);
            mtn->left = doMergeTrees(t1->left,t2->left);
            mtn->right = doMergeTrees(t1->right,t2->right);
            return mtn;
        }else{
            return t1 ? t1 : t2;
        }
    }
};

int main() {
    Solution *solution = new Solution();
    TreeNode *t1 = new TreeNode(1);
    t1->left = new TreeNode(3);
    t1->right = new TreeNode(2);
    t1->left->left = new TreeNode(5);
    t1->left->right = new TreeNode(6);

    TreeNode *t2 = new TreeNode(2);
    t2->left = new TreeNode(1);
    t2->right = new TreeNode(3);
    t2->left->right = new TreeNode(4);
    t2->right->right = new TreeNode(7);
    solution->doMergeTrees(t1, t2);

    //Returns with no error.
    return 0;
}

