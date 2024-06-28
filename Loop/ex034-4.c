/*#include<stdio.h>
main()
{
	int i, su,c,n,b;
	c = 0;
	printf("”‚ÍH");
	scanf("%d", &i);
	b = i;
	do {
		su = 0;
		do {
			printf(" ");
			su++;
		} while (su < b);//‹ó”’•”•ª
		c++;
		n = 0;
		do {
			printf("*");
			n++;
		} while (n < c);//*•”•ª
		printf("\n");
		b--;
	} while (c!=i);
}*/
#include<stdio.h>
main()
{
	int su,i,j;
	printf("”‚ÍH");
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
	