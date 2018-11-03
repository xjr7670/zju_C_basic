#include <stdio.h>

int main()
{
    int num, num1, i;
    int p=1, neg=1;
    
    scanf("%d", &num);
    
    if (num < 0) {
        neg = -1;
        num *= neg;
    }
    num1 = num;
    while(num1 > 9) {
        p *= 10;
        num1 /= 10;
    }
    
    if (neg == -1) {
        printf("fu ");
    }
    
    do {
        i = num / p;
        
        switch(i) {
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
            case 0:
                printf("ling");
        }
        
        if (num >= 10) {
            printf(" ");
        }
        num %= p;
        p /= 10;
        
    } while (p > 0);
    
	return 0;
}

