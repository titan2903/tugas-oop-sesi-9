#include "search_node.h"

bool search_node(Node* root, int key) {
    if (root == nullptr) {
        return false;
    }
    if (root->key == key) {
        return true;
    }
    if (key < root->key) {
        return search_node(root->left, key);
    }
    return search_node(root->right, key);
}