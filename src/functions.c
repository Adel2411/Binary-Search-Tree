#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"


//create method :
nodeP createNode(int value) {
    nodeP new_node = malloc(sizeof(node));
    if (new_node == NULL) {
        printf("Error: Could not allocate memory for the new node.\n");
        exit(-1);
    }
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


//display method (infixe) ordre croissat :
void displayTree(nodeP root) {
    if (root == NULL)
        return;

    if (root->left != NULL)
        displayTree(root->left);
    
    printf("%3d", root->data);
    
    if (root->right != NULL)
        displayTree(root->right);
}


//search methods :
bool searchValue(nodeP root, int data) {
    if (root == NULL)
        return false;
    if (root->data == data)
        return true;

    if (root->data < data)
        return searchValue(root->right, data);
    else
        return searchValue(root->left, data);
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
