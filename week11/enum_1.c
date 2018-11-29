#include <stdio.h>

enum COLOR {RED, YELLOW, GREEN};

int main(int argc, char const *argv[])
{
    int color = -1;
    char *colorName = NULL;

    printf("Please input the color number you like: ");
    scanf("%d", &color);

    switch( color ) {
        case RED:
            colorName = "red";
            break;
        case YELLOW:
            colorName = "yellow";
            break;
        case GREEN:
            colorName = "green";
            break;
        default:
            colorName = "unknown";
            break;
    }
    printf("The color you like is: %s\n", colorName);

    return 0;

}
