#include <stdio.h>
#include "BinTree.h"

int main(void) {
  int keys[] = {12, 5, 18, 2, 9, 15, 19, 17, 13};
  BinTree* T = BinTree_create();
  for(int i=0; i<9; i++)
  {
     if(!BinTree_insert(T, keys[i]))
       printf("Erro ao inserir a chave %d\n", keys[i]);
  }
  BinTree_preorder(T->root);
  BinTree_inorder(T->root);

  return 0;
}