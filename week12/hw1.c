#include <stdio.h>
#include <stdlib.h>
 
typedef struct _node {
    int value;
    struct _node *before;
} Node;
 
int main()
{
    Node *head = NULL;
    int number;
    do {
        scanf("%d", &number);
        if ( number != -1) {
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->before = head;
            head = p;
        }
    } while ( number != -1);
    Node *p;
    for ( p = head; p; p=p->before) {
        printf("%d ", p->value);
    }
    
    return 0;
}