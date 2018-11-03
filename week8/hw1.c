#include <stdio.h>

int main()
{
    char c, line[1000];
    int cnt=0, i=0, j=0;
    int len[100]={0};

    do {
        scanf("%c", &c);
        line[i++] = c;
    } while (i < 1000 && c != '.');

    for (i = 0; line[i] != '.'; i++) {
        if (line[i] != ' ') {
            cnt++;
            len[j] = cnt;
        //    printf("len[%d]=%d\n", j, cnt);
        } else {
            if (cnt != 0) {
                j++;
            }
            cnt = 0;
        }
    }

    for (i = 0; len[i] != 0; i++) {
        printf("%d", len[i]);
        if (len[i+1] != 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
