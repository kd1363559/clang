#include<stdio.h>
main()
{
	int i;
	char moji1[40], moji2[40], moji3[40];
	printf("文字列１を入力：");
	scanf("%s", &moji1[0]);
	printf("文字列2を入力：");
	scanf("%s", &moji2[0]);
	printf("moji1=%s\tmoji2=%s\n", &moji1[0],&moji2[0]);
	printf("入れ替えると\n");
	for (i = 0; moji1[i] != '\0'; i++) {
		moji3[i] = moji1[i];
	}
	moji3[i] = '\0';
	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';
	for (i = 0; moji3[i] != '\0'; i++) {
		moji2[i] = moji3[i];
	}
	moji2[i] = '\0';
	printf("moji1=%s\tmoji2=%s\n", &moji1[0], &moji2[0]);
}