#include "find_max.h"

Node* findMax(Node* root) {
    if (root == nullptr || root->right == nullptr) {
        return root;
    }
    return findMax(root->right);
}