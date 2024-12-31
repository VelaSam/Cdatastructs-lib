#include "../includes/stack.h"
#include "../includes/testing_framework.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

  TSTACK *stack;
  init_stack(stack);

  assert_equals(__FILE_NAME__, stack->size, 0);

  return EXIT_SUCCESS;
}
