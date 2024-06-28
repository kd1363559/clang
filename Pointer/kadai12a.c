#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* p_a, * p_b;
	p_a = a;
	p_b = b;
	int i;
	printf("---実行前---\n");
	printf("配列 a[ ]=");
	for (i = 0; *(p_a+i) != 0; i++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *(p_a+i));
	}
	printf("\n配列 b[ ]=");
	for (i = 0; *(p_b+i) != 0; i++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *(p_b+i));
	}
	p_a = a;
	p_b = b;
	for (i = 0; *p_a  != 0; i++,p_a++);

	for (i = 0; *p_b!= 0; i++) {
		*p_b++ = *p_a --;
	}
	printf("\n---実行後---\n");
	printf("配列 a[ ]=");
	for (i = 0; *(p_a+i) != 0; i++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *(p_a+i));
	}
	printf("\n配列 b[ ]=");
	for (i = 0; *(p_b+i) != 4; i++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *(p_b+i));
	}


}