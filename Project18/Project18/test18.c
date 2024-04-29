#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//buho();
	//sachic();
	//bigyo();
	//nonri();
	//nonr iBujong();
	//sizeChk();
	smaHang();
	system("pause");
	return 0;
}

int smaHang() {
	//삼항(조건) 연산자
	// a? b : c -> a가 참이면 b를 수행, a가 거짓이면 c를 수행
	int var1 = 77, var2 = 99, var3 = 55
	int min = var1 < var2 ? var1 : var2;
	printf("var1 < var2 ? : %d\n\n", min);
	min = min < var3 ? min::var3
	printf("min < var3 ? : %d\n\n", min);
}
int sizeChk() {
	//sizeof
	int iVar8 = 123;
	double dvar = 3.14;
	char chVar = 'A';
	char chArr[20] = "hello";
	printf("sizeof iVar8 : %d\n\n", sizeof iVar8);
	printf("sizeof dVar : %d\n\n", sizeof dVar);
	printf("sizeof chAar : %d\n\n", sizeof chAar);
	printf("sizeof chArr : %d\n\n", sizeof chArr);
}
int bigyo() {
	//관계(비교) 연산자 : > < >= <== !=
	
}
	int scahic() {
		//사칙 연산자 : + - * / %(나머지)
		int iVar2 = 123, iVar3 = 4;
		printf("%d + %d = %d\n\n", iVar2, iVar3, iVar2 + iVar3);
		printf("%d - %d = %d\n\n", iVar2, iVar3, iVar2 - iVar3);
		printf("%d * %d = %d\n\n", iVar2, iVar3, iVar2 * iVar3);
		printf("%d / %d = %d\n\n", iVar2, iVar3, iVar2 / iVar3);
		printf("%d o/o %d = %d\n\n", iVar2, iVar3, iVar2 % iVar3);
	}


int buho(void) {
	//부호 연산자// 값의 부호를 변경해주는 연산자
	int iVar1 = 123;
	printf("iVar1 : %d\n\n", iVar1);
	printf("-iVar1 : %d\n\n", -iVar1);
	printf("- -iVar1 : %d\n\n", - -iVar1);
}