#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	//incDec();
	//incDec2();
	system("pause");
	return 0;
}

int incDec3() {
	//���� : ���� ������ ���� �����ϰ� ������ ������ �����Ѵ�.
	//���� : ���� ������ ���� ���߿� �����ϰ� ������ ������ ���� �����Ѵ�.
	int untA = 123, intB = 123, intC, intD;
}
int incDec2() {
	//���� ������ ������ ����
	int iVar2 = 123, iVar3 =, iVar4, iVar5;
	iVar4 = iVar2++;//������ �ڿ� ++(--) ���� �� : ��������
	iVar5 = ++iVar3;//������ �տ� ++(--) ���� �� : ��������
	printf("iVar2 : %d, iVar3 : %d, iVar4 : %d, iVar5 : %d\n\n"
		     , iVar2, iVar3, iVar4, iVar5);
	return 0;
}

int incDec() {
	//�߰� ������ :++ --
	// ++ : �ڱ� �ڽ��� ���� �ϳ� �ø���.
	// -- : �ڱ� �ڽ��� ���� �ϳ� ������.
	int iVar1 = 123;
	iVar1++;
	printf("iVar1++ : %d\n\n", iVar1);
	iVar1++;
	printf("iVar1++ : %d\n\n", iVar1);
	iVar1--;
	printf("iVar1-- : %d\n\n", iVar1);
	iVar1--;
	printf("iVar1-- : %d\n\n", iVar1);
	return 0;
}