#include <stdio.h>

int main()
{
    int num, n=0;

    scanf("%d", &num);
    while(num > 0) {
        ++n;
        num /= 10;
    }
    printf("%d\n", n);

    return 0;
}