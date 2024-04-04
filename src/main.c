#include "functions.c"
#include "functions.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  printf("\n-------------------- BINARY SEARCH TREE METHODS "
         "-----------------\n\n");
  // Create a new binary search tree and insert elements into it :
  int tab[8] = {17, 2, 36, 8, 22, 12, 18, 10};

  nodeP root = NULL;
  for (size_t i = 0; i < 8; ++i) {
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

  printf("Enter a number to remove : ");
  scanf("%d", &x);
  root = removeValue(root, x);
  if (root == NULL)
    printf("The value is not in the tree\n");
  else {
    printf("the content of the BST after deleting %d is : ", x);
    displayTree(root);
  }
  printf("\n\n");
  return 0;
}
