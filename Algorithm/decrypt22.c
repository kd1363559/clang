#include<stdio.h>
main()
{
	char s[20], k[20];
	int i;
	printf("文字列を入力して下さい＞");
	scanf("%s", &s[0]);
	i = 0;
	printf("復号化キー＞", i);
	scanf("%s", &k[i]);

	while (s[i] != '\0') {
	
		k[i] = k[i] - '0';
		s[i] -= k[i];
		i++;
	}
	printf("復号化済み文字列は、 % s\n", s);
}