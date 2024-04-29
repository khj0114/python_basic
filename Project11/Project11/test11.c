#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(void) {
	char charVar1 = 'A', charVar2 = 66;
	printf("charVar1 : %c, %d\n\n", charVar1, charVar1);
	printf("charVar2 : %c, %d\n\n", charVar2, charVar2);
	char chMin = CHAR_MIN, chMax = CHAR_MAX;
	printf("char min : %d, max : %d\n\n", chMin, chMax);
	unsigned char uChMax = UCHAR_MAX;
	printf("unsigned char max : %d\n\n", uChMax);

	system("pause");
	return 0;
}