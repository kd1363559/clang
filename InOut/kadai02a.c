#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎���?");
	scanf("%lf%lf", &a, &b);
	printf("***%lf��%lf�̎l�����Z***\n", a, b);
	printf("�a=%f ��=%f ��=%f ��=%f\n", a + b, a - b, a * b, a / b);
}