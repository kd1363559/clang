#include<stdio.h>
main()
{
	double a, b;
	double *p_a = &a;
	double *p_b=&b;
	printf("実数値1?");
	scanf("%lf", &a);
	printf("実数値2?");
	scanf("%lf", &b);
	if (*p_a > *p_b) {
		printf("大きいほう=%lf\n", *p_a);
	}
	else {
		printf("大きいほう=%lf\n", *p_b);
	}

}