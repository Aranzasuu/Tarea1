#ifndef LIST_H
#define LIST_H

typedef struct Node Node;

struct Node {
    const void * data;
    Node * next;
    Node * prev;
};

typedef struct {
    Node * head;
    Node * tail;
    Node * current;
} List; 

List * createList(void);

void * firstList(List * list);

void * nextList(List * list);

void * lastList(List * list);

void * prevList(List * list);

void pushFront(List * list, void * data);

void pushBack(List * list, void * data);

void pushCurrent(List * list, void * data);

void * popFront(List * list);

void * popBack(List * list);

void * popCurrent(List * list);

void cleanList(List * list);

char *get_csv_field (char *, int);

#endif