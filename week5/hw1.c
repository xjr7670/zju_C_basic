#include <stdio.h>

int main()
{
    int n, m, i, j, key;
    int cnt=0, sum=0, num=2;

    scanf("%d %d", &n, &m);
    //n=2, m=4;

    while(num) {
        key =  1;
        for (j = 2; j <= num/2; j++) {
            if (num % j == 0) {
                key = 0;
                break;
            }
        }
        if (key) {
            cnt++;
            if (cnt >= n && cnt <= m) {
                sum += num;
            }
        }
        if (cnt > m) {
            printf("%d", sum);
            break;
        }
        num++;
    }

    return 0;
}
