#include<stdio.h>
main()
{
	double a, b;
	double *p_a = &a;
	double *p_b=&b;
	printf("ŽÀ”’l1?");
	scanf("%lf", &a);
	printf("ŽÀ”’l2?");
	scanf("%lf", &b);
	if (*p_a > *p_b) {
		printf("‘å‚«‚¢‚Ù‚¤=%lf\n", *p_a);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤=%lf\n", *p_b);
	}

}