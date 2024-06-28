#include<stdio.h>
main()
{
	int i,n;
	float gokei;
	float x[3][2];
	for (n = 0; n < 3; n++) {
		for (gokei = 0, i = 0; i < 2; i++) {
			printf("x[%d][%d]=",n,i);
			scanf("%f", &x[n][i]);
			gokei += x[n][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n\n", n, gokei / 2);
	}
}