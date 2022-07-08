#include <stdio.h>
#include <string.h>

typedef struct Node {
  int x, y;
} Node;

int main() {
  Node *est, estrutura;
  est = &estrutura;

  printf("Digite x:\n");
  scanf("%d", &est->x);
  printf("Digite y:\n");
  scanf("%d", &est->y);

  printf("x: %d | y: %d \n", est->x, est->y);
  return 0;
}