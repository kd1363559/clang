#include<stdio.h>
int hikaku(char d1);
main()
{
	char d1;
	printf("アルファベット１文字");
	scanf("%c", &d1);
	if (hikaku(d1) == 0)
	{
		printf("小文字\n");

	}
	else {
		printf("大文字\n");
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