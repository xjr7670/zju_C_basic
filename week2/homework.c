#include <stdio.h>

int main()
{
    int a, b, s, g;
    
    scanf("%d", &a);
    
    b = a / 100;
    s = a % 100 / 10;
    g = a % 10;
    
    printf("%d\n", g * 100 + 10 * s + b);
    
    return 0;
}
