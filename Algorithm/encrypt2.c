#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	char s[20];
	int i, n, k[20];
	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] += k[i];
		i++;
	}
	printf("暗号化文字列は%s\n暗号化キーは",s);
	n = 0;
	while (n<i) {
		printf("%d", k[n]);
		n++;
	}
}