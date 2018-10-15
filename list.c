#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list (struct node *head) {
  printf("\nLINKED LIST: ");
  while (head) {
    printf("%d --> ", head->i);
    head = head->next;
  }
  printf("NULL\n");
}

struct node * insert_front (struct node *head, int val) {
  struct node *new;
  new = malloc(sizeof(struct node));
  new->i = val;
  new->next = head;
  head = new;
  return head;
}

struct node * free_list(struct node *head) {
  struct node *next;
  while (head) {
    next = head->next;
    free(head);
    head = next;
  }
  return NULL;
}
