#include <stdio.h>
#include "acllib.h"

int Setup()
{
	initConsole();
	printf(" ‰»ÎøÌ∂»: ");
	int width;
	scanf("%d", &width);
	initWindow("test", 100, 100, width, width);
	beginPaint();
	setPenColor(BLUE);
	setPenWidth(1);
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	line(20, 20, width-20, width-20);
	endPaint();
	return 0;
}
