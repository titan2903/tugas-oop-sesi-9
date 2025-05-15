#include <iostream>
#include "./node/node.h"
#include "./insert/insert.h"
#include "./search/search_node.h"
#include "./delete/delete.h"
#include "./find_min/find_min.h"
#include "./find_max/find_max.h"
#include "./height/height.h"
#include "./count_leaves/count_leaves.h"
#include "./inorder/inorder.h"

int main() {
    Node* root = nullptr;

    // INSERT
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 45);
    root = insert(root, 90);
    root = insert(root, 15);

    // SEARCH
    std::cout << "Found 30? " << (search_node(root, 30) ? "Yes" : "No") << "\n";

    // FIND MIN & MAX
    std::cout << "Minimum value: " << findMin(root)->key << "\n";
    std::cout << "Maximum value: " << findMax(root)->key << "\n";

    // HEIGHT
    std::cout << "Height of tree: " << height(root) << "\n";

    // COUNT LEAVES
    std::cout << "Number of leaves: " << countLeaves(root) << "\n";

    // DELETE
    root = deleteNode(root, 50);

    // TRAVERSAL
    std::cout << "Inorder: "; inorder(root); std::cout << "\n";

    return 0;
}