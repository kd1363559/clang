#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;
	printf("�T���l�����:");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (d[i] == s) {
			break;
		}
	}
	if (i==10) {
		printf("������Ȃ�����\n");

	}
	else {
		printf("�T���l%d���A%d�Ŕ���\n",s, i);
	}
}