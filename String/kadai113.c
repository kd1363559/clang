#include<stdio.h>
main()
{
	char moji[] = { "GameSoft" };
	int i;
	for (i = 0; moji[i] != '\0'; i++);
	printf("文字列=%s\n", moji);
	printf("文字数=%d文字\n", i);
}