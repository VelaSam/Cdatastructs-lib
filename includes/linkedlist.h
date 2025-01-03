#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct tlinked_list TLLIST;

struct tlinked_list {
  struct tnode *head;
  struct tnode *tail;
  int size;
};

TLLIST *init_linked_list();
int insert_at_beginning(TLLIST *ll, int value);
int insert_at_end(TLLIST *ll, int value);
int insert_at_position(TLLIST *ll, int value, int position);

int delete_from_beginning(TLLIST *ll);
int delete_from_end(TLLIST *ll);
int delete_from_position(TLLIST *ll);

int search(TLLIST *ll, int value);
int update_value_at_position(TLLIST *ll, int position, int new_value);

int get_size(TLLIST *ll);
int reverse(TLLIST *ll);
int sort(TLLIST *ll);
int merge(TLLIST *ll, TLLIST *other_list);

#endif
