#include <stdio.h>

int main()
{
    int num[8];
    int x, n=0;

    scanf("%d", &x);
    while( x != -1) {
        scanf("%d", &x);
        num[n] = x;
        n++;
    }

    do {
        printf("%d ", num[n]);
        n--;
    } while (n >= 0);
    
    return 0;
}
