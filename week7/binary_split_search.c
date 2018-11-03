#include <stdio.h>

/*
 * 未排序，search函数还不能用的，在这里
 * */

int search(int key, int a[], int len)
{
    int left = 0;
    int right = len - 1;
    int mid, ret = -1;

    while (right < left) {
        mid = (left + right) / 2;
        if (a[mid] == key) {
            ret = mid;    
        } else if (a[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ret;
}

int main()
{
    int k = 13;
    int amount[] = {1, 2, 3, 4, 12, 3, 2, 13, 19, 5, 22};
    int r = search(k, amount, sizeof(amount)/sizeof(amount[0]));

    if (r > -1) {
        printf("%d\n", r);
    }
    return 0;
}
