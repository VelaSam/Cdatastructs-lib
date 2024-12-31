#include "../includes/stack.h"
#include <stdlib.h>

typedef struct tnode TNODE;
typedef struct tstack TSTACK;

struct tnode {
  int *data;
  TNODE *over;
};

void init_stack(TSTACK *ts) {
  // i return a pointer to a malloced piece of memory the size of a stack
  ts = (TSTACK *)malloc(sizeof(TSTACK));
  ts->top = NULL;
  ts->size = 0;
}

int peek(TSTACK *ts) { return (*ts->top->data); }

void push(TSTACK *ts, int new_data) {}

int pop(TSTACK *ts) {}

int is_empty(TSTACK *ts) {}
