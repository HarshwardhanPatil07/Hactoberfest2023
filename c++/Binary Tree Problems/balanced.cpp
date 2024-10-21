   // github username - RAGHAVS1304,
   // aim             - Implementation and application of stack data structure
   // date            - 17 October 2023




#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight (root) != -1;
    }

    int dfsHeight (TreeNode *root) {

        if (root == NULL) return 0;

        int leftHeight = dfsHeight (root -> left);

        if (leftHeight == -1)
            return -1;

        int rightHeight = dfsHeight (root -> right);

        if (rightHeight == -1)
            return -1;

        if (abs(leftHeight - rightHeight) > 1)
            return -1;

        return max (leftHeight, rightHeight) + 1;
    }
};