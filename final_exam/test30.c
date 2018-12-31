#include <stdio.h>

void swap( int *pa, int *pb ) 
{
    int pt;
    pt = *pa, *pa = *pb, *pb = *pa;
}
int main(void)
{    
    int x=1, y=2;
    swap(＆x, ＆y);
    printf("%d%d", x, y);
}