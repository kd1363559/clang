#include<stdio.h>
#include<string.h>

struct syohin_data {
	char name[20];
	int tanka;
};

main()
{
	struct syohin_data syouhin1, syouhin2;
	strcpy(syouhin1.name,"�G���s�c");
	syouhin1.tanka = 30;
	syouhin2 = syouhin1;
	printf("syouhin1.name=%s\n", syouhin1.name);
	printf("syouhin1.tanka=%d\n", syouhin1.tanka);
	printf("syouhin2.name=%s\n", syouhin2.name);
	printf("syouhin2.tanka=%d\n", syouhin2.tanka);
}