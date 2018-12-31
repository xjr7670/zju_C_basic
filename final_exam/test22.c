#include <stdio.h>

#define DF(a, b) (a+2*b)

int main()
{
    int s = 5;
    int k = DF(s+1, s-3);
    printf("%d", k);

    return 0;
}
