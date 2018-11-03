#include <stdio.h>

int main(void)
{
    int a[10];
    
    printf("%p\n", &a);
    printf("%p\n", a);
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);

    return 0;
}
