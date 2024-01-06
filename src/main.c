#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "functions.c"



int main(int argc, char const *argv[])
{
    printf("\n-------------------- BINARY SEARCH TREE METHODS -----------------\n\n");
    // Create a new binary search tree and insert elements into it :
    int tab[8] = {5, 17, 30, 8, 2, 4, 1, 3};
    
    nodeP root = createNode(tab[0]);
    for (size_t i = 1; i < sizeof(tab)/sizeof(*tab); ++i) {
        root = insertValue(root, tab[i]);
    }

    printf("the content of the BST is : ");
    displayTree(root);
    printf("\n\n");
    return 0;
}
