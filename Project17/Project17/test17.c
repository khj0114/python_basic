#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char chVar1;
	printf(" ���� �ϳ� �Է� : ");
	scanf_s("%c", &chVar1, 1);
	printf("chVar1 : %c", chVar1);

	char chArr[30];
	printf("���ڿ�(30�� �Է� : ");
	scanf_s("%s", chArr, 30);
	//�Է� ���� ���ڿ��� ���̸� ����
	//���ڿ��� �Է� ���� ���� &�� ������� ����
	printf("chArr : %s\n\n", chArr);
	
	system("pause");
	return 0;
}