#include<stdio.h>
int hikaku(char d1);
main()
{
	char d1;
	printf("�A���t�@�x�b�g�P����");
	scanf("%c", &d1);
	if (hikaku(d1) == 0)
	{
		printf("������\n");

	}
	else {
		printf("�啶��\n");
	}
}

int hikaku(char d1) {
	if (d1>=0x61&&d1<=0x7A) {
		return(0);
	}
	else {
		return(1);
	}
}