#include<stdio.h>
void get_sumavg(int x,int y,int *c,float *d);
main()
{
	int a, b, c;
	float d;
	printf("�������Q���́F");
	scanf("%d%d", &a,&b);
	get_sumavg(a, b, &c, &d);
	printf("���v��%d,���ς�%.2f\n", c, d);
}

void get_sumavg(int x, int y,int *c,float *d) {
	*c = x + y;
	*d = (float)*c / 2.0;

	return;
}