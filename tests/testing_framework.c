#include <stdio.h>

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

int test_number = 0;

void assert_equals(char *file_name, int expected, int received) {
  if (expected == received) {
    printf("%s %s: test number %d passed %s\n", KGRN, file_name, ++test_number,
           KNRM);
  } else {
    printf("%s %s: test number %d failed - expected %d but received %d %s\n",
           KRED, file_name, ++test_number, expected, received, KNRM);
  }
}
