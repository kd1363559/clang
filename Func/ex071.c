#include<stdio.h>
int gokei(int d1, int d2,int d3);
float heikin(int d1, int d2, int d3);
main()
{
	int d1, d2, d3,sum;
	float avg;
	printf("�������R���́F");
	scanf("%d%d%d", &d1, &d2, &d3);
	sum = gokei(d1, d2, d3);
	avg = heikin(d1, d2, d3);
	printf("���v��%d\t���ς�%.2f\n", sum, avg);
}

int gokei(int d1, int d2, int d3) {
	int sum;
	sum = d1 + d2 + d3;
	return(sum);
}
float heikin(int d1, int d2, int d3) {
	float avg;
	avg = (float)(d1 + d2 + d3) / 3.0;
	return(avg);
}