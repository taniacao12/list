#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *list;
	print_list(list);

	printf("\nadding a 3 to front of list...\n");
	list = insert_front(list, 3);
	print_list(list);

	printf("\nadding a 6 to front of list...\n");
	list = insert_front(list, 6);
	print_list(list);

	printf("\nadding a 2 to front of list...\n");
	list = insert_front(list, 2);
	print_list(list);

	printf("\nremoving all items in linked list...\n");
	free_list(list);
	print_list(list);

  return 0;
}
