#include<stdio.h>
main()
{
	char a[50];
	char b[20];
	int i,j;
	printf("•¶Žš—ñ1?");
	scanf("%s", a);
	printf("•¶Žš—ñ2?");
	scanf("%s", b);
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; j++) {
		a[i + j] = b[j];
	}
	a[i + j] = '\0';
	printf("%s\n", a);
}