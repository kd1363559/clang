#include<stdio.h>
main()
{
	char s[20];
	int i, k[20];
	printf("文字列を入力して下さい＞");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]の復号化キー＞",i);
		scanf("%d", &k[i]);

		s[i] -= k[i];
		i++;
	}
	printf("復号化済み文字列は、 % s\n", s);
}