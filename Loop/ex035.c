#include<stdio.h>
main()
{
	int sum, i;
	sum = 0;
	while (1) {
		printf("�������āF");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		sum += i;
	}
	printf("���v��%d\n", sum);
}