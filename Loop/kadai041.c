#include<stdio.h>
main()
{
	int i, sum,n;
	float avg;
	sum = 0; n = 0;
	while (1) {
		printf("�����i�|�X�X�X�ŏI���j?");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		sum += i;
		n++;
	}
	avg = (float)sum / n;
	printf("���v��%d\n���ρ�%.2f\n", sum, avg);
}