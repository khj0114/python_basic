#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char chVar1;
	printf(" 문자 하나 입력 : ");
	scanf_s("%c", &chVar1, 1);
	printf("chVar1 : %c", chVar1);

	char chArr[30];
	printf("문자열(30자 입력 : ");
	scanf_s("%s", chArr, 30);
	//입력 받을 문자열의 길이를 지정
	//문자열을 입력 받을 때는 &를 사용하지 않음
	printf("chArr : %s\n\n", chArr);
	
	system("pause");
	return 0;
}