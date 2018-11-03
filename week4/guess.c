#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;

    printf("我已经想了一个1到100之间的数。\n");

    do {
        printf("请猜这个1到100之间的数是多少： \n");
        scanf("%d", &a);
        count++;
        if (a > number) {
            printf("你猜的数大了\n");
        } else if (a < number) {
            printf("你猜的数小了\n");
        }
    } while (a != number);
    printf("猜对了，你用了%d次\n", count);

    return 0;
}