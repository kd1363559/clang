#include<stdio.h>
main()
{
	int i, c, sum;
	float avg;
	i = 0;
	for (c = 0; i != -999; c++) {
		printf("���́H");
		scanf("%d", &i);
		if (i != -999) {
			sum += i;
		}
		else {
			avg = (float)sum / c;
		}
		
	}
	
	printf("���v��%d\t���ρ�%.2f\n", sum, avg);
}