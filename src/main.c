#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "functions.c"



int main(int argc, char const *argv[])
{
    printf("\n-------------------- BINARY SEARCH TREE METHODS -----------------\n\n");
    // Create a new binary search tree and insert elements into it :
    int tab[8] = {17, 2, 36, 8, 22, 12, 18, 10};
    
    nodeP root = createNode(tab[0]);
    for (size_t i = 1; i < sizeof(tab)/sizeof(*tab); ++i) {
        root = insertValue(root, tab[i]);
    }

    printf("the content of the BST is : ");
    displayTree(root);
    printf("\n\n");

    int x;
    printf("Enter a number to search : ");
    scanf("%d", &x);
    if (searchValue(root, x))
        printf("number %d exists in the BST", x);
    else
        printf("number %d doesn't exist in the BST", x);
    printf("\n\n");
    
    return 0;
}
