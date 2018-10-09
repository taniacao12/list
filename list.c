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

void print_list (struct node *) {
  printf("LINKED LIST: \n");
  struct *current = node;
  while (current != NULL) {
    printf("%d --> ", current->i);
    current = current->next;
  }
}

struct node * insert_front (struct node *, int) {
  struct node new;
  new = (new) malloc(sizeof(struct node));
  new -> next = *;
  new -> i = int;
  return new;
}

struct node * free_list(struct node *) {

}

int main(){
  printf("\n");

  struct node list;
  list = return_example();
  print_student(rand_student);

  printf("\nPromoting student... \n\n");

  promote(&rand_student);

  print_student(rand_student);


  return 0;
}
