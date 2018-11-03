#include <stdio.h>

int main()
{
    
    int i, x, y;
    i=x=y=0;

    do {
        ++i;
        if (i % 2) 
            x += i,
        i++;
        y += i++;
    } while ( i<=7 );

    printf("%d %d %d", i, x, y);

    return 0;
}
