#include<stdio.h>
void link(char* p_a,char *p_b);
main()
{
	char a[100];
	char b[50];


	printf("”z—ña:");
	scanf("%s", &a);


	printf("”z—ñb:");
	scanf("%s", &b);

	link(a,b);
	printf("”z—ña:%s\n", a);
}

void link(char* p_a, char* p_b) {
	
	while (*p_a != '\0') {
		p_a++;
	}
	while (*p_b != '\0') {
		*p_a = *p_b;
		p_a++;
		p_b++;
	}
	*p_a = '\0';
	return;

}