#include<stdio.h>
#include<stdlib.h>
#include<float.h>

int main(void)
{
	intTypeConversion();
	//floatTypeConversion();
	//intFloatTypeConversion();
	system("pause");
	return 0;
}

int intTypeConversion() {
	short sVar1 = 32000;
	int iVar1 = sVar1;//16bit -> 32bit//�ڵ� ���� ��ȯ
	ptintf("iVar1 : %d, sVar1 : %d\n\n", iVar1, sVar1);

	int iVar2 = 2100000000;
	short sVar2 = (short)iVar2;
	//32bit -> 16bit//�� ��ȯ �����ڸ� ����Ͽ� ���� ���� ��ȯ
	printf("iVar2 : %d, sVar2 : %d\n\n", iVar2, sVar2);

	return 0;
}