#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void display_node(Node_ptr node)
{
  Int_ptr number = (Int_ptr)node->data;
  printf("%d ", *number);
}

void display_list(List_ptr list){
  printf("list : ");
  Node_ptr p_walk = list->head;
  while(p_walk != NULL){
    display_node(p_walk);
    p_walk = p_walk->next;
  }
  printf("\n");
}

int main(){
  int numbers[] = {1,2,3};
  Int_ptr ptr_to_numbers = numbers;
  int length = sizeof(numbers)/sizeof(int);
  List_ptr list = create_list();
  for(int i = 0; i < length; i++){
    add_to_end(list, ptr_to_numbers + i);
  }
  display_list(list);
  return 0;
}