#include <stdio.h>

int main() {
	int price = 0;
	
	printf("�������Ԫ����");
	scanf("%d", &price);
	
	int change = 100 - price;
	printf("�������Ԫ����");
	scanf("%d", &price);
	
	change = 100 - price;	
	printf("����%dԪ��\n", change);
	
	return 0;
}

