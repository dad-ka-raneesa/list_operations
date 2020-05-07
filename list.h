#ifndef __LIST_H
#define __LIST_H


typedef struct node{
  void *data;
  struct node *next;
} Node;

typedef Node *Node_ptr;

typedef struct
{
  Node *head;
  Node *last;
  int count;
} List;

typedef List *List_ptr;
typedef void *Void_ptr;
typedef int *Int_ptr;

List_ptr create_list(void);
Node_ptr create_node(void *data);
void add_to_end(List_ptr list, void *data);

#endif