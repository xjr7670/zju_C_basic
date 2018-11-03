#include <stdio.h>

int main()
{
    int num, m, count=0, b=0;
    
    scanf("%d", &num);
    while (num >= 1) {
        m = num % 10;
        num /= 10;
        ++count;
        if (m % 2 == count % 2) {
            b += 1 << (count - 1);
        } else {
            b += 0;
        }
    }
    
    printf("%d", b);
	return 0;
}

