#include<stdio.h>
main()
{
	char moji[20];
	int  i;
	printf("文字列は？:");
	scanf("%s", moji);
	for (i = 0; moji[i] != '\0'; i++);
	printf("文字列：%s\t文字数=%d文字\n", moji, i);
}