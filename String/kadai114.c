#include<stdio.h>
main()
{
	char moji[20];
	int  i;
	printf("•¶š—ñ‚ÍH:");
	scanf("%s", moji);
	for (i = 0; moji[i] != '\0'; i++);
	printf("•¶š—ñF%s\t•¶š”=%d•¶š\n", moji, i);
}