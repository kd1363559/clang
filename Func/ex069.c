#include<stdio.h>
main()
{
	int a,sum,i;
	float avg;
	i = 0; sum = 0;
	printf("����");
	while (scanf("%d",&a) != EOF) {
		sum += a ;
		i++;
		printf("����");
	}
	avg = (float)sum / i;
	printf("���v��%d\t���ρ�%.2f", sum, avg);
}