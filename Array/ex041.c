#include<stdio.h>
main()
{
	float sum,avg,box[3];
	int i;
	for (sum=0,i = 0; i < 3; i++) {
		printf("���������:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	avg = sum / 3;
	printf("���v��%.2f�ł�\n���ς�%.2f�ł�\n", sum, avg);

}