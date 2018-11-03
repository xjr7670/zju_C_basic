#include <stdio.h>

int main()
{
    int n, j=0, o=0;
    
    do {
        scanf("%d", &n);
        if (n % 2 == 0) {
            o++;
        } else if (n != -1) {
            j++;
        } else {
            break;
        }
    } while (n != -1);
    
    printf("%d %d", j, o);
    
	return 0;
}

