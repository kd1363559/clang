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
	struct fruit* p;
	p = kudamono;
	int i,m,sum;
	sum = 0;
	for (i = 0; i < 3; i++) {
		printf("���i��:\t\t%s\n", (p+i)->name);
		printf("���i:\t\t%d�~\t\t", (p + i)->prise);
		printf("���E�ߓx:\t%d�|�C���g", (p + i)->point);
		(p + i)->total = ((p + i)->prise) * ((p + i)->number);
		sum += (p + i)->total;
		printf("\n��:\t\t%d��\t\t���z:\t\t\\%d-\n\n", (p + i)->number, (p + i)->total);
	}
	printf("���v���z��\\%d-", sum);
}