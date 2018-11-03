#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, n1;
    int quotient, remainder;
    int cnt = 0, n = 0, result[200];

    // Get input of num1 and num2
    scanf("%d/%d", &num1, &num2);

    // Get quotient
    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("%d", quotient);
    if (remainder != 0) {
        printf(".");
    }
    
    while (remainder != 0 && cnt < 200) {
        cnt++;
        n = 1;
        n1 = remainder * pow(10, n);
        while (n1 < num2) {
            printf("0");
            n++;
            cnt++;
            n1 = remainder * pow(10, n);
        }
        quotient = n1 / num2;
        remainder = n1 % num2;
        printf("%d", quotient);
    }
    printf("\n");
    return 0;
}
