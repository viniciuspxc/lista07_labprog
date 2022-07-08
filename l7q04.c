#include <stdio.h>
#include <stdlib.h>
#define QNT 3

typedef struct Node {
  int x, y;
  float z;
  struct Node *prox;
} Node;

void media(Node *est, int i) {

  while (i) {
    est->z = (est->x + est->y) / 2;
    est = est->prox;
    i--;
  }
}

int main() {
  Node *est;
  est = malloc(QNT * sizeof(Node));

  for (int i = 0; i < QNT; i++) {
    printf("Digite x-%d:\n", i + 1);
    scanf("%d", &(est + i)->x);
    printf("Digite y-%d:\n", i + 1);
    scanf("%d", &(est + i)->y);

    if (i == QNT - 1) {
      (est + i)->prox = est;
    } else
      (est + i)->prox = est + i + 1;
  }

  media(est, QNT);

  for (int i = 0; i < QNT; i++) {
    printf("\nMedia %d %.2f, Proxima media: %.2f\n", i + 1, (est + i)->z,
           (est + i)->prox->z);
  }

  return 0;
}