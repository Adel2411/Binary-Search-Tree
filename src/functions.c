#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"


//create method :
nodeP createNode(int value) {
    nodeP new_node = malloc(sizeof(node));
    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;
}

//insert method :
nodeP insertValue(nodeP root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (root->data < data)
        root->right = insertValue(root->right, data);
    else
        root->left = insertValue(root->left, data);
    
    return root;
}


//display methods :
void displayTree(nodeP root) {
    
}


//search methods :
bool searchNode(int data) {

}

bool searchHelper(nodeP root, int data) {

}


//remove methods :
void removeNode(int data) {

}

nodeP removeHelper(nodeP root, int data) {

}


//functions used to help the remove method :
int successor(nodeP root) {

}

int predecessor(nodeP root) {

}
