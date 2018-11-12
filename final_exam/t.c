#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, i, flag=1, min;

    scanf("%d/%d", &n1, &n2);
    min = n1 > n2? n2: n1;

    for (i = 2; i <= min;) {
        if (n1 % i == 0 && n2 % i == 0) {
            printf("i=%d, n1=%d, n2=%d\n", i, n1, n2);
            n1 = n1 / i;
            n2 = n2 / i;
            i = 2;
        } else {
            i++;
        }
    }


    printf("%d/%d", n1, n2);

    return 0;
}