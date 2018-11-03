#include <stdio.h>

int main()
{
    int num[101] = {0};
    int i, m, x, max_m;
    int cnt = 0;

    // 接受输入
    while (cnt < 2) {
        scanf("%d %d", &m, &x);
        if (x == 0 && m != 0) {
            continue;
        }
        num[m] += x;

        // 记录下最高幂次，也就是对应的数组num的索引是多少
        if (m > max_m) {
            max_m = m;
        }

        if (m == 0) {
            cnt++;
        }
    }
    
    // 计算并输出
    for (i = 100; i >= 0; i--) {
        //printf("\n");
        // 系数为0不输出
        if (num[i] == 0) {
            continue;
        }      

        if (i != max_m) {
            printf("+");
        }

        // 判断系数是否需要输出
        // 当系数 大于1 或者 等于1且幂次等于0 的时候，输出
        // 其它情况都不输出
        if (num[i] > 1 || (num[i] == 1 && i == 0)) {
            printf("%d", num[i]);
        }

        // 判断x是否需要输出
        // 当且仅当幂次等于0的时候，不输出
        // 其它情况都要输出
        if (i != 0) {
            printf("x");
        }

        // 判断幂次i是否需要输出
        // 当i大于1的时候，输出
        // 其它情况都不输出
        if (i > 1) {
            printf("%d", i);
        }

        // 判断加号要不要输出
        // 只有输出的不是0次幂项时不需要输出
        // 其它情况都要输出
        // if (i != 0) {
        //     printf("+");
        // }
        
        //printf("\ni=%d, num[%d]=%d, max_m=%d\n", i, i, num[i], max_m);
    }
    return 0;
}

1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9

1 9 4 1
4 8 3 6
1 8 1 2
0 7 8 9