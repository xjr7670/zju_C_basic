#include <stdio.h>

int main()
{
    int bjt, utc, bjt_h, bjt_m, utc_h, utc_m;

    scanf("%d", &bjt);

    if (bjt >= 100) {
        // 4位数或3位数时都一样
        bjt_h = bjt / 100;
        bjt_m = bjt % 100;
    } else if (bjt >= 10) {
        // 2位数
        bjt_h = bjt / 10;
        bjt_m = bjt % 10;
    } else {
        // 1位数
        bjt_h = 0;
        bjt_m = bjt;
    }

    if (bjt_h < 8) {
        utc_h = bjt_h + 23 - 8;
    } else {
        utc_h = bjt_h - 8;
    }

    utc = utc_h*100 + bjt_m;
    printf("%d", utc);

    return 0;
}