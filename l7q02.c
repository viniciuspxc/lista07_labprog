#include <stdio.h>

typedef struct Node {
  int x, y;
  float z;
} Node;

void media(Node *est) { est->z = (est->x + est->y) / 2; }

int main() {
  Node *est, estrutura;
  est = &estrutura;

  printf("Digite x:\n");
  scanf("%d", &est->x);
  printf("Digite y:\n");
  scanf("%d", &est->y);

  printf("x: %d | y: %d \n", est->x, est->y);
  media(est);
  printf("Media %.2f", est->z);
  return 0;
}