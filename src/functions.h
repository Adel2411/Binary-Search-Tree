#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node, *nodeP;

//create method : 
nodeP createNode(int value);

//insert method :
nodeP insertValue(nodeP root, int data);

//display method :
void displayTree(nodeP root);

//search methods :
bool searchValue(nodeP root, int data);

//remove methods :
nodeP removeValue(nodeP root, int data);

//function added to help the remove method :
nodeP findMin(nodeP node);

#endif