#include<stdio.h>
main()
{
	int i;
	while (1) {
		printf("�����i�|�X�X�X�œ��͏I���j�H");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		printf("�W�i����%o\t�P�U�i��%x\n", i, i);
	}
}