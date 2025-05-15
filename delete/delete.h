#ifndef DELETE_H
#define DELETE_H

#include "../node/node.h"
#include "../find_min/find_min.h" // Karena deleteNode menggunakan findMin

Node* deleteNode(Node* root, int key);

#endif