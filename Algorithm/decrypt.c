#include<stdio.h>
main()
{
	char s[5];
	int i;
	printf("暗号化文字列を入力してください＞");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i]!='\0') {
		s[i] = s[i] - 1;
		i++;
	}
	printf("複合済み文字列は%s\n", s);
}