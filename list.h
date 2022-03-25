#ifndef List_h
#define List_h
#include "list.c"

typedef struct List List;

List * createList(void);

const char *get_csv_field (char *, int);

#endif /* List_h */