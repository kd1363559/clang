#include<stdio.h>
main()
{
	char moji;
	while (moji != EOF) {
		printf("����(^z�ŏI��)�H�F");
		scanf("%c", &moji);
		printf("%c", moji);
		if (moji == ^ z) {
			break;
		}
	}
}