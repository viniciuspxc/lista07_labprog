#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int n;
  struct Node *prox;
} Node;

void printest(Node *est, int qnt) {
  for (int i = 0; i < qnt; i++) {
    printf("\nStruct %d, Proxima Struct: %d\n", est->n, est->prox->n);
    est = est->prox;
  }
}

void adicionar(Node *est, int *qnt) {
  for (int i = 0; i < *qnt - 1; i++) {
    est = est->prox;
  }

  Node *newest = malloc(sizeof(Node));

  newest->prox = est->prox;
  est->prox = newest;
  newest->n = *qnt;
  *qnt += 1;
}

void remover(Node *est, int *qnt, int pos) {
  for (int i = 0; i < pos - 1; i++) {
    est = est->prox;
  }
  est->prox = est->prox->prox;
  *qnt -= 1;
}

int main() {
  Node *est;
  int qnt = 3;
  est = malloc(qnt * sizeof(Node));

  for (int i = 0; i < qnt; i++) {
    (est + i)->n = i;

    if (i == qnt - 1) {
      (est + i)->prox = est;
    } else
      (est + i)->prox = est + i + 1;
  }
  printest(est, qnt);
  printf("---------------");
  adicionar(est, &qnt);

  printest(est, qnt);
  printf("---------------");
  remover(est, &qnt, 2);

  printest(est, qnt);

  return 0;
}