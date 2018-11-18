#include <stdio.h>

int main(int argc, char const *argv[])
{
    // argc 表示后面的数组参数 argv 中包含有多少个参数，即 argv 的长度
    // argv 是一个数组，它包含着在终端中程序命令后面的所有参数
    int i; 

    for (i = 0; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}