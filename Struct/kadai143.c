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
	int i;
	struct fruit a = { "peach",300,5,3,0 };
	printf("¤•i–¼:\t\t%s\n", a.name);
	printf("‰¿Ši:\t\t%d‰~\n", a.prise);
	printf("‚¨Š©‚ß“xF\t");
	for (i = 0; i < a.point; i++) {
		printf("š");
	}
	printf("\nŒÂ”F\t\t%dŒÂ\n", a.number);
	a.total = (a.prise) * (a.number);
	printf("‹àŠz:\t\t\\%d-", a.total);
}