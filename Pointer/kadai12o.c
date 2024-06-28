#include<stdio.h>
main()
{
	char* p = "pointer test program";
	char save[256];
	int i;
	for (i = 0; *p != '\0'; i++) {
		save[i] = *p;
		p++;
	}
	save[i] = '\0';
	printf("save[]=%s\n", save);
}