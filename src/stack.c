#include "stack.h"
#include <stdlib.h>

void initialize(stack *s)
{
  // implement initialize here
  s->head = NULL;
}

void push(int x, stack *s)
{
  // implement push here
  node *prev = s->head;

  s->head = (node *)malloc(sizeof(node));

  s->head->data = x;
  s->head->next = prev;
}

int pop(stack *s)
{
  // implement pop here
  node *freeing = s->head;
  int popped_top = s->head->data;
  s->head = s->head->next;

  free(freeing);
  return popped_top;
}

bool empty(stack *s)
{
  // implement empty here
  if (s->head == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool full(stack *s)
{
  // implement full here

  // Stack is dynamic and cannot become full.
  return false;
}
