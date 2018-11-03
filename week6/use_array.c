#include <stdio.h>

int main()
{
    int i, x, cnt = 0;
    double sum = 0;
    int number[100];

    scanf("%d", &x);
    while (x != -1) {
        number[cnt] = x;
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if (cnt > 0) {
        printf("%f\n", sum / cnt);
        for (i = 0; i < cnt; i++) {
            if (number[i] > sum / cnt) {
                printf("%d\n", number[i]);
            }
        }
    }

    return 0;
}
