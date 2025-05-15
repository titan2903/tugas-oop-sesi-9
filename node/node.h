#ifndef NODE_H
#define NODE_H

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int value);
};

#endif