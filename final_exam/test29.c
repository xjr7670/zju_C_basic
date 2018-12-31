#include <stdio.h>

int main(int argc, char** argv)
{
    while(**argv++!='a');
    printf("%s", *argv);
    return 0;
}