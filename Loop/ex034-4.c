/*#include<stdio.h>
main()
{
	int i, su,c,n,b;
	c = 0;
	printf("数は？");
	scanf("%d", &i);
	b = i;
	do {
		su = 0;
		do {
			printf(" ");
			su++;
		} while (su < b);//空白部分
		c++;
		n = 0;
		do {
			printf("*");
			n++;
		} while (n < c);//*部分
		printf("\n");
		b--;
	} while (c!=i);
}*/
#include<stdio.h>
main()
{
	int su,i,j;
	printf("数は？");
	scanf("%d",&su);
	i=1;
	do{
		j = 0;
		do{
			printf(" ");
			j++;
		}while(j<=su-i);
		j=0;
		do{
			printf("*");
			j++;
		}while(j<i);
		i++;
		printf("\n");
	}while(i<=su);
}
	