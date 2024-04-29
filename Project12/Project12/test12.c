#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

int main(void) 
{
	char chVar = CHAR_MAX;
	short sVar = SHRT_MAX;
	int iVar = INT_MAX;
	long lVar = LONG_MAX;
	long long llVar = LLONG_MAX;
	int chSize = sizeof chVar, sSize = sizeof sVar, iSize = sizeof iVar;
	int lSize = sizeof lVar, llSize = sizeof llVar;
	printf("%d, %d\n\n", lSize, llSize);
	system("pause");
	return 0;
}