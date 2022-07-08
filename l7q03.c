#include <stdio.h>
#include <stdlib.h>
#define QNT 3

typedef struct Node {
  int x, y;
  float z;
} Node;

void media(Node *est) { est->z = (est->x + est->y) / 2; }

int main() {
  Node *est;

  est = malloc(QNT * sizeof(Node));

  for (int i = 0; i < QNT; i++) {
    printf("Digite x-%d:\n", i + 1);
    scanf("%d", &(est + i)->x);
    printf("Digite y-%d:\n", i + 1);
    scanf("%d", &(est + i)->y);
  }

  for (int i = 0; i < QNT; i++) {
    media((est + i));
    printf("\nMedia %d %.2f\n", i + 1, (est + i)->z);
  }
  return 0;
}