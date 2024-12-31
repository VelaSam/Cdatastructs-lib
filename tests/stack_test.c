#include "../includes/stack.h"
#include "../includes/testing_framework.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int top_value;
  int size;

  // declaring the stack
  TSTACK *stack;

  assert_equals(__FILE_NAME__, -1, peek(stack, NULL));

  // initializing the stack
  stack = init_stack();

  assert_equals(__FILE_NAME__, 0, get_size(stack));
  assert_equals(__FILE_NAME__, stack->size, 0);

  assert_equals(__FILE_NAME__, -1, peek(stack, NULL));

  // pushing 2 to the stack
  push(stack, 2);

  peek(stack, &top_value);

  assert_equals(__FILE_NAME__, 2, top_value);
  assert_equals(__FILE_NAME__, 1, get_size(stack));
  assert_equals(__FILE_NAME__, 1, stack->size);

  int popped_value;

  // popping 2 from the stack
  pop(stack, &popped_value);
  assert_equals(__FILE_NAME__, 2, popped_value);
  assert_equals(__FILE_NAME__, 0, get_size(stack));
  assert_equals(__FILE_NAME__, 0, stack->size);

  return EXIT_SUCCESS;
}
