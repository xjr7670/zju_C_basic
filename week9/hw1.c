#include <stdio.h>
#include <string.h>

/*
 找出第一个字符串在第二个字符串中出现的位置
 位置可能有多个（返回所有出现的位置），也可能没有（返回－1）

 思路：
    取得第一个字符串的大小，
    用 strstr() 来找出第一个出现的位置，然后用指针指向这个位置+字符串大小后的位置，就得到剩下的字符串
    然后再用 strstr() 来找出第二个出现的位置，然后指针再移动到这个位置+字符串大小后的位置，如此循环到结尾
*/

int main(int argc, char const *argv[])
{
    char s1[10000];
    char s2[10000];
    char *p = 0;
    int flag;
    int s1_len, s2_len, i, j, k;

    scanf("%s", s1);
    scanf("%s", s2);

    if (strstr(s2, s1) == NULL) {
        printf("%d", -1);
    } else {
        s1_len = strlen(s1);
        s2_len = strlen(s2);
        for (i = 0; i < s2_len;) {
            k = i;
            flag = 1;
            if (s2_len - i < s1_len) {
                break;
            }
            for (j = 0; j < s1_len; j++) {
                if (s1[j] == s2[k]) {
                    k++;
                } else {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                printf("%d ", i);
                i += s1_len;
            } else {
                i++;
            }
        }
    }
    return 0;
}