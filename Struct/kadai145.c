#include<stdio.h>
struct fruit {
	char name[30];
	int prise;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit kudamono[] = {{"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	int i,m,sum;
	sum = 0;
	for (i = 0; i < 3; i++) {
		printf("¤•i–¼:\t\t%s\n", kudamono[i].name);
		printf("‰¿Ši:\t\t%d‰~\t\t", kudamono[i].prise);
		printf("‚¨‘E‚ß“x:\t");
		for (m = 0; m < kudamono[i].point; m++) {
			printf("š");
		}
		kudamono[i].total = (kudamono[i].prise) * (kudamono[i].number);
		sum += kudamono[i].total;
		printf("\nŒÂ”:\t\t%dŒÂ\t\t‹àŠz:\t\t\\%d-\n\n", kudamono[i].number, kudamono[i].total);
	}
	printf("\n\t‡Œv‹àŠz\\%d-", sum);
}