#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un, i;
	srand(time(0));
	for (i = 0; i < 100; i++) {

		un = rand() % 300 + 1;
		printf("%d\t",un);
	}

}
