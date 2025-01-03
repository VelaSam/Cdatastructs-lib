#include "../includes/stack.h"
#include "../includes/testing_framework.h"
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
  int top_value;
  int size;
  int popped_value;

  TSTACK *stack;

  // Test 1: Initialize stack and check if empty
  stack = init_stack();
  assert_equals(__FILE_NAME__, 0, get_size(stack));    // Test 1
  assert_equals(__FILE_NAME__, 0, stack->size);        // Test 2
  assert_equals(__FILE_NAME__, -1, peek(stack, NULL)); // Test 3
  assert_equals(__FILE_NAME__, TRUE, is_empty(stack)); // Test 4

  // Test 2: Push a value and check the top of the stack
  push(stack, 2);
  peek(stack, &top_value);
  assert_equals(__FILE_NAME__, 2, top_value);       // Test 5
  assert_equals(__FILE_NAME__, 1, get_size(stack)); // Test 6
  assert_equals(__FILE_NAME__, 1, stack->size);     // Test 7

  // Test 3: Push another value and check the stack's state
  push(stack, 5);
  peek(stack, &top_value);
  assert_equals(__FILE_NAME__, 5, top_value);       // Test 8
  assert_equals(__FILE_NAME__, 2, get_size(stack)); // Test 9
  assert_equals(__FILE_NAME__, 2, stack->size);     // Test 10

  // Test 4: Pop the top value and check the state of the stack
  pop(stack, &popped_value);
  assert_equals(__FILE_NAME__, 5, popped_value);    // Test 11
  assert_equals(__FILE_NAME__, 1, get_size(stack)); // Test 12
  assert_equals(__FILE_NAME__, 1, stack->size);     // Test 13

  // Test 5: Pop the remaining value and check if the stack is empty
  pop(stack, &popped_value);
  assert_equals(__FILE_NAME__, 2, popped_value);       // Test 14
  assert_equals(__FILE_NAME__, 0, get_size(stack));    // Test 15
  assert_equals(__FILE_NAME__, 0, stack->size);        // Test 16
  assert_equals(__FILE_NAME__, TRUE, is_empty(stack)); // Test 17

  // Test 6: Peek empty stack (edge case)
  assert_equals(__FILE_NAME__, -1, peek(stack, NULL)); // Test 18

  // Test 7: Pop from an empty stack (edge case)
  assert_equals(__FILE_NAME__, -1, pop(stack, &popped_value)); // Test 19
  assert_equals(__FILE_NAME__, 0, get_size(stack));            // Test 20
  assert_equals(__FILE_NAME__, TRUE, is_empty(stack));         // Test 21

  // Test 8: Push after stack is emptied
  push(stack, 10);
  peek(stack, &top_value);
  assert_equals(__FILE_NAME__, 10, top_value);      // Test 22
  assert_equals(__FILE_NAME__, 1, get_size(stack)); // Test 23
  assert_equals(__FILE_NAME__, 1, stack->size);     // Test 24

  // Test 9: Test clear functions, then add to stack and test again
  clear(stack);
  assert_equals(__FILE_NAME__, 0, get_size(stack)); // Test 25
  push(stack, 10);
  push(stack, 10);
  push(stack, 10);
  push(stack, 10);
  assert_equals(__FILE_NAME__, 4, get_size(stack)); // Test 25
  clear(stack);
  assert_equals(__FILE_NAME__, 0, get_size(stack)); // Test 26

  free(stack);

  return EXIT_SUCCESS;
}
