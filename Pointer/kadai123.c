#include<stdio.h>
main()
{
	double a, b;
	double *p_a = &a;
	double *p_b=&b;
	printf("�����l1?");
	scanf("%lf", &a);
	printf("�����l2?");
	scanf("%lf", &b);
	if (*p_a > *p_b) {
		printf("�傫���ق�=%lf\n", *p_a);
	}
	else {
		printf("�傫���ق�=%lf\n", *p_b);
	}

}