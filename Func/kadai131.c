#include<stdio.h>
main()
{
	char moji;
	while (moji != EOF) {
		printf("文字(^zで終了)？：");
		scanf("%c", &moji);
		printf("%c", moji);
		if (moji == ^ z) {
			break;
		}
	}
}