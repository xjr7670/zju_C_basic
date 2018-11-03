#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    double c = (a + b) / 2.0;

    printf("%d和%d的平均值=%.2f\n", a, b, c);

    return 0;
}
