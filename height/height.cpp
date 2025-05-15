#include "height.h"
#include <algorithm>

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return std::max(leftHeight, rightHeight) + 1;
}