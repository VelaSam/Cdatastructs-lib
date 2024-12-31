#ifndef STACK_H
#define STACK_H

typedef struct tstack TSTACK;

struct tstack {
  struct tnode *top;
  int size;
};

TSTACK *init_stack();

int peek(TSTACK *ts, int *output_data);

int push(TSTACK *ts, int new_data);

int pop(TSTACK *ts, int *output_data);

int is_empty(TSTACK *ts);

int get_size(TSTACK *ts);

int clear(TSTACK *ts);

#endif
