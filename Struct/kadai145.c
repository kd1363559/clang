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
		printf("���i��:\t\t%s\n", kudamono[i].name);
		printf("���i:\t\t%d�~\t\t", kudamono[i].prise);
		printf("���E�ߓx:\t");
		for (m = 0; m < kudamono[i].point; m++) {
			printf("��");
		}
		kudamono[i].total = (kudamono[i].prise) * (kudamono[i].number);
		sum += kudamono[i].total;
		printf("\n��:\t\t%d��\t\t���z:\t\t\\%d-\n\n", kudamono[i].number, kudamono[i].total);
	}
	printf("\n\t���v���z��\\%d-", sum);
}