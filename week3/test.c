#include <stdio.h>

int main()
{
    int n = 10;

    for (;;) {
        if (n<0) {
            break;
        }
        printf("%d\n", n);
        n--;
    }

    return 0;
}