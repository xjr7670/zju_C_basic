#include "acllib.h"
#include <stdio.h>

int Setup()
{
	initWindow("Test", DEFAULT, DEFAULT, 800, 600);
	initConsole();
	printf("hello\n");
	int x;
	beginPaint();
	
	line(10, 10, 100, 100);
	scanf("%d", &x);
	line(100, 100, x, 0);
	
	endPaint();
	
	return 0;
}
