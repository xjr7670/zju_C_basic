#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    switch(x) {
        case 0:
            printf("0\n");
            break;
        default:
            if (x < 0) {
                printf("-1\n");
            } else {
                printf("%d\n", 2*x);
            }
    }

    return 0;
}