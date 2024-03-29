#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List_ptr create_list(void)
{
  List_ptr list = malloc(sizeof(List));
  list->head = NULL;
  list->last = NULL;
  list->count = 0;
  return list;
}

Node_ptr create_node(Void_ptr data){
  Node_ptr new_node = malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

void add_to_end(List_ptr list, Void_ptr data)
{
  Node_ptr new_node = create_node(data);
  if (list->head == NULL)
  {
    list->head = new_node;
  }
  else
  {
    list->last->next = new_node;
  }
  list->last = new_node;
  list->count++;
}