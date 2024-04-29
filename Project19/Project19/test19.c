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
	//전위 : 증감 연산응 먼저 수행하고 나머지 연산을 수행한다.
	//후위 : 증감 연산을 가장 나중에 수행하고 나머지 연산을 먼저 수행한다.
	int untA = 123, intB = 123, intC, intD;
}
int incDec2() {
	//증감 연산의 전위와 후위
	int iVar2 = 123, iVar3 =, iVar4, iVar5;
	iVar4 = iVar2++;//변수의 뒤에 ++(--) 오는 것 : 후위연산
	iVar5 = ++iVar3;//변수의 앞에 ++(--) 오는 것 : 전위연산
	printf("iVar2 : %d, iVar3 : %d, iVar4 : %d, iVar5 : %d\n\n"
		     , iVar2, iVar3, iVar4, iVar5);
	return 0;
}

int incDec() {
	//중간 연산자 :++ --
	// ++ : 자기 자신의 값을 하나 올린다.
	// -- : 자기 자신의 값을 하나 내린다.
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