#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int sum;
	sum = atoi(argv[1]) + atoi(argv[2]);
	printf("%s+%s=%d", argv[0], argv[1], sum);

}