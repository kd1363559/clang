#include<stdio.h>
int max(int d1, int d2);
main()
{
	int d1, d2;
	printf("������2���́F");
	scanf("%d%d", &d1, &d2);
	
	printf("max=%d\n",max(d1,d2));
}

int max(int d1, int d2) {
	if (d1 > d2) {
		return(d1);
	}
	else {
		return(d2);
	}
}