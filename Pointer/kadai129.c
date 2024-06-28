#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* p_a, * p_b;
	p_a = a;
	p_b = b;
	int i,*p_j;
	printf("---実行前---\n");
	printf("配列 a[ ]=");
	for (i = 0; *p_a != 0; i++, p_a++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *p_a);
	}
	printf("\n配列 b[ ]=");
	for (i = 0; *p_b != 0; i++, p_b++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *p_b);
	}
	p_a = a;
	p_b = b;
		p_j = p_a;
		p_a = p_b;
		p_b = p_j;
	printf("\n---実行後---\n");
	printf("配列 a[ ]=");
	for (i = 0; *p_a != 0; i++, p_a++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *p_a);
	}
	printf("\n配列 b[ ]=");
	for (i = 0; *p_b != 0; i++, p_b++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *p_b);
	}
}