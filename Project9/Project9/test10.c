#include<stdio.h>
#include<stdlib.h>
#include<float.h>

int main(void) {
	printf("float min : %e, max : %e", FLT_MIN, FLT_MAX);
	printf("double min : %e, max : %e\n\n", DBL_MIN, DBL_MAX);

	float fMin = FLT_MIN, fMax = FLT_MAX;
	double dMin = DBL_MIN, dMax = DBL_MAX;
	printf("float min : %e, max : %e\n\n", fMin, fMax);
	printf("double min : %e, max : %e\n\n", dMin, dMax);
	system("pause");
	return 0;
}