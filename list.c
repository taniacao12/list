#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//http://www.learn-c.org/en/Linked_lists
// declare struct
struct node {
  int i;
  struct node *next;
};

//struct node return_example(){
//  struct node root;
//  root = (struct node *) malloc(sizeof(struct node));
//  root -> next = 2;
//  root -> i=1
//  return root;
//}

void print_list (struct node *pointer) {
  printf("LINKED LIST: \n");
  while (pointer != NULL) {
    printf("%d --> ", pointer->i);
    pointer = pointer->next;
  }
}

struct node * insert_front (struct node *pointer, int) {
  struct node new;
  new = malloc(sizeof(struct node));
  new->i = int;
  new->next = *pointer;
  *pointer = new;
}

struct node * free_list(struct node *pointer) {
  struct node *next = NULL;
  while (*pointer != NULL) {
    next = (*pointer)->next;
    free(*pointer);
    *pointer = next;
  }
}

int main(){
  printf("\n");

  struct node list;
  //list = return_example();
  //print_student(rand_student);

  return 0;
}
