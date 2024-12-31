#include "../includes/testing_framework.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int received1 = 3;
  int expected1 = 5;

  int received2 = 2;
  int expected2 = 2;

  int received3 = 8;
  int expected3 = 8;

  int received4 = 1;
  int expected4 = 8;

  assert_equals(__FILE_NAME__, &received2, &expected2);
  assert_equals(__FILE_NAME__, &received1, &expected1);
  assert_equals(__FILE_NAME__, &received4, &expected4);
  assert_equals(__FILE_NAME__, &received3, &expected3);

  return EXIT_SUCCESS;
}
