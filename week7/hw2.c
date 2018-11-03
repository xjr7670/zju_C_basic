#include <stdio.h>

int main()
{
    int N, i = 0, j;
    int c_max, r_min;   // 列、行上的最大值
    int i_min, j_max;   // 鞍点所在的行和列
    int flag, key, max_c = -1;

    c_max = r_min = -1;
    i_min = j_max = -1;

    scanf("%d", &N);

    int arr[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        if (max_c == -1) {
            // max_c == -1 说明还没有找到该行的最大值所在列
            for (j = 0; j < N; j++) {
                if (arr[i][j] > c_max) {
                    c_max = arr[i][j];
                    j_max = j;
                    //printf("i=%d, j=%d, c_max=%d\n", i, j, c_max);
                }
            }
            max_c = c_max;
            r_min = arr[i][j_max];
            flag = i_min = i;
        } else { // 该行最大值已经找到，直接从其所在列纵向判断该值是否为所在列最小值
            for (j = 0; j < N; j++) {
                if (arr[j][j_max] < r_min) {
                    // 如果出现arr[j][j_max] < r_min，说明有比它更小的值存在
                    // 则从下一行继续找
                    r_min = arr[j][j_max];
                    i_min = j;
                    max_c = -1;
                    break;
                }
            }
        }
    }

    if (flag == i_min) {
        printf("%d %d", i_min, j_max);
    } else {
        printf("NO");
    }

    return 0;
}
