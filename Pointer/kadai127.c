#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_data;
	float sum, avg;
	int i;
	p_data = data;
	printf("”z—ñ data[ ]=");
	for (i = 0, sum = 0; i < 5; i++,p_data++) {
		if (i > 0) {
			printf(",");
		}
		printf("%f", *p_data);
		sum += *p_data;
	}
	avg = sum / i;
	printf("\n‡Œv=%7.3f\n•½‹Ï=%7.3f\n", sum, avg);
}