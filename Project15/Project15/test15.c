#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) 
{
	char chArray[30] = "nice to meet you, too. ";
	printf("���ڿ� ���� : %s\n\n", chArray);
	printf("���ڿ� ���� : %s, ��� : %s\n\n", chArray, "�Ϲ� ���ڿ� ���");

	strcpy_s(chArray, sizeof chArray, "how are you???");
	printf("chArray : %s\n\n", chArray);

	strcpy_s(chArray2, 30, "i am fine, thank you.");
	printf("chArray2 : %s\n\n", chArray2);
	system("pause");
	return 0;
}