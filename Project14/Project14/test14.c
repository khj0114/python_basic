#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("%d + %d = %d\n\n", 9876, 8765, 9876 + 8765);
	printf("%d - %d = %d\n\n", 9876, 8765, 9876 - 8765);
	int iVar1 = 9876, iVar2 = 8765;
	printf("%d + %d = %d\n\n", iVar1, iVar2, iVar1 + iVar2);
	printf("%d - %d = %d\n\n", iVar1, iVar2, iVar1 - iVar2);
	iVar1 + 3214;
	printf("%d + %d = %d\n\n", iVar1, iVar2, iVar1 + iVar2);

	const double MARATHON_LENGTH = 42.195;
	//MARATHON_LENGTH = 55.195;
	//const�� ���� ���� ����� �ȴ�.
	//const�� ���� ���� ���� �ٲ� �� ����.
	printf("MARATHON_LENGTH :%lf\n\n", MARATHON_LENGTH);
	printf("MARATHON_LENGTH �� ��� : %lf\n\n", MARATHON_LENGTH);

	const MARATHON_LENGTH2;
	system("pause");
	return 0;
}