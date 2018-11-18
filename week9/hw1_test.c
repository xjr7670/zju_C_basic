#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "abba";
    char s2[] = "ababbba abbabbabbabbaacc";

    if (strstr(s2, s1) == NULL) {
        printf("%d", -1);
    } 
    return 0;
}