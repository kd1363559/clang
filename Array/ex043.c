#include<stdio.h>
#include<string.h>
main()
{
	int cnt;
	char str[] = "orange";

	cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("文字列：%s\n", &str[0]);
	printf("文字数は%d文字\n", cnt);
	printf("文字数は%d文字\n", strlen(str));
}