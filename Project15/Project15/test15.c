#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) 
{
	char chArray[30] = "nice to meet you, too. ";
	printf("문자열 변수 : %s\n\n", chArray);
	printf("문자열 변수 : %s, 상수 : %s\n\n", chArray, "일반 문자열 상수");

	strcpy_s(chArray, sizeof chArray, "how are you???");
	printf("chArray : %s\n\n", chArray);

	strcpy_s(chArray2, 30, "i am fine, thank you.");
	printf("chArray2 : %s\n\n", chArray2);
	system("pause");
	return 0;
}