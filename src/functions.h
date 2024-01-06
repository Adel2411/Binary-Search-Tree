#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node
{
    int data;
    struct node* next;
}node, *nodeP;

//insert methods :
void insertNode(node node);
node insertHelper(node root, node node);

//display methods :
void displayTree();
void displayHelper(node root);

//search methods :
bool searchNode(int data);
bool searchHelper(node root, int data);

//remove methods :
void removeNode(int data);
node removeHelper(node root, int data);

//suppresions helper methods
int successor(node root);
int predecessor(node root);

#endif