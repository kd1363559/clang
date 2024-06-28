#include<stdio.h>
void get_sumavg(int x,int y,int *c,float *d);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d", &a,&b);
	get_sumavg(a, b, &c, &d);
	printf("‡Œv‚Í%d,•½‹Ï‚Í%.2f\n", c, d);
}

void get_sumavg(int x, int y,int *c,float *d) {
	*c = x + y;
	*d = (float)*c / 2.0;

	return;
}