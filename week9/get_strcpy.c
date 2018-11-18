#include <stdio.h>

char *mycpy(char *dst, const char *src)
{
    char *ret = dst;

    while (*src) {
        *dst++ = *src++;
    }
    *dst = '\0';
    return ret;
}

int main(int argc, char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "abc";

    mycpy(s1, s2);

    return 0;
}