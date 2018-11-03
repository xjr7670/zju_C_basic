#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.1;
    int sign = 1;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
        sign = -sign;
    }

    printf("f(%d)=%f\n", n, sum);

    return 0;
}