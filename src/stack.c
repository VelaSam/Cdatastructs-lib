#include "../includes/stack.h"
#include <cstddef>
#include <stdlib.h>

typedef struct tnode TNODE;
typedef struct tstack TSTACK;

struct tnode {
  int data;
  TNODE *under;
};

TSTACK *init_stack() {
  TSTACK *ts = (TSTACK *)malloc(sizeof(TSTACK));
  ts->top = NULL;
  ts->size = 0;
  return ts;
}

int push(TSTACK *ts, int new_data) {
  if (ts == NULL) {
    return -1;
  }
  TNODE *new_node = (TNODE *)malloc(sizeof(TNODE));
  new_node->data = new_data;
  if (ts->size != 0) {
    new_node->under = ts->top;
  }
  ts->top = new_node;
  ts->size++;
  return 0;
}

int pop(TSTACK *ts, int *output_data) {
  if (ts == NULL) {
    return -1;
  }
  if (ts->size == 0) {
    return -1;
  }
  int data = ts->top->data;
  TNODE *popper = ts->top;
  ts->top = ts->top->under;
  free(popper);
  *output_data = data;
  ts->size--;
  return 0;
}

int peek(TSTACK *ts, int *output) {
  if (ts == NULL) {
    return -1;
  }
  if (ts->size == 0) {
    return -1;
  }
  *output = ts->top->data;
  return 0;
}

int is_empty(TSTACK *ts) { return ts == NULL || ts->size == 0; }

int get_size(TSTACK *ts) { return ts == NULL ? -1 : ts->size; }

int clear(TSTACK *ts) {
  if (ts->size == 0 || ts->size == -1) {
    return ts->size;
  }
  int pop_return_value;
  pop_return_value = pop(ts, NULL);
  while (pop_return_value != 0) {
    pop_return_value = pop(ts, NULL);
  }
  return 0;
}
