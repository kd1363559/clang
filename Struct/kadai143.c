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
	printf("���i��:\t\t%s\n", a.name);
	printf("���i:\t\t%d�~\n", a.prise);
	printf("�����ߓx�F\t");
	for (i = 0; i < a.point; i++) {
		printf("��");
	}
	printf("\n���F\t\t%d��\n", a.number);
	a.total = (a.prise) * (a.number);
	printf("���z:\t\t\\%d-", a.total);
}