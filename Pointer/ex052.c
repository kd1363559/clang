#include<stdio.h>
main()
{
	int a, b,w;
	
	a = 100; b = 200;
	int *p_a=&a, *p_b=&b;
	printf("���s�O�Fa=%d\tb=%d\n", a, b);
	//����ւ������i�|�C���^�g�p�j
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("���s��Fa=%d\tb=%d\n", a, b);
}