#include <stdio.h>

int main()
{
    char *line;
    int i = 0;

    do {
        line[i] = getchar();
        if (i >= 2) {
            if (line[i-2] == 'E' && line[i-1] == 'N' && line[i] == 'D') {
                break;
            }
        }
        ++i;
    } while();
    
    return 0;
}
