#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d", i);
        
            if (n - i >= 2) {
                printf(" ");
            }
        }
    }

    return 0;
}   