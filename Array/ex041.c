#include<stdio.h>
main()
{
	float sum,avg,box[3];
	int i;
	for (sum=0,i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	avg = sum / 3;
	printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·\n", sum, avg);

}