#include<stdio.h>
main()
{
	int i;
	while (1) {
		printf("�����R�[�h�i�|�P�œ��͏I���j?");
		scanf("%d", &i);
		if (i == -1) {
			break;
		}
		printf("%c\n", i);
	}
}