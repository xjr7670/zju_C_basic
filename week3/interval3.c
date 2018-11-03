#include <stdio.h>

/* 改进后的时间差计算函数
 * 把时间都转换成分钟再计算
 */

int main() 
{
    int hour1, minute1;
    int hour2, minute2;
    int gap, ih, im;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int it1 = hour1 * 60 + minute1;
    int it2 = hour2 * 60 + minute2;
    
    if (it2 - it1 < 0) {
        gap = it1 - it2;
    } else {
        gap = it2 - it1;  
    }
    ih = gap / 60;
    im = gap % 60;

    printf("时间差是%d小时%d分。\n", ih, im);

    return 0;
}