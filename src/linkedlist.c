
#include "../includes/linkedlist.h"

typedef struct tnode TNODE;
typedef struct tlinked_list TLLIST;

struct tnode {
  int data;
  TNODE *next;
  TNODE *prev;
};
