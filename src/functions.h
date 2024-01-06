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
bool searchNode(int data);
bool searchHelper(nodeP root, int data);

//remove methods :
void removeNode(int data);
nodeP removeHelper(nodeP root, int data);

//suppresions helper methods
int successor(nodeP root);
int predecessor(nodeP root);

#endif