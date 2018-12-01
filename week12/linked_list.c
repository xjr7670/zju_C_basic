#include "node_list.h"
#include <stdio.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list {
    Node* head;
    Node* tail;
} List;

int main(int argc, char const *argv[])
{
    List list;
    int number;
    list.head = list.tail = NULL;

    do {
        scanf("%d", &number);
        if ( number != -1 ) {
            head = add(&list, number);            
        }
    } while ( number != -1 );

    return 0;
}

void add(List* pList, int number)
{
    // add to linked-list
    Node *p = (Node*)malloc(sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    // find the last
    Node *last = pList->head;
    if ( last ) {
        while ( last -> next ) {
            last = last -> next;
        }
        // attach
        last -> next = p;
    } else {
        pList->head = p;
    }

    return head;
}
