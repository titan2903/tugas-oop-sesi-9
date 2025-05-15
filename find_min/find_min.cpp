#include "find_min.h"

Node* findMin(Node* root) {
    if (root == nullptr || root->left == nullptr) {
        return root;
    }
    return findMin(root->left);
}