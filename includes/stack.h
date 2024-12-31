#ifndef STACK_H
#define STACK_H

typedef struct tstack TSTACK;

void init_stack(TSTACK *ts);

struct tstack {
  struct tnode *top;
  int size;
};

int peek(TSTACK *ts);

void push(TSTACK *ts, int new_data);

int pop(TSTACK *ts);

int is_empty(TSTACK *ts);

#endif
