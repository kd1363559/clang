#include<stdio.h>
main()
{
	char moji[20];
	while (moji != EOF) {
		printf("������(^z�ŏI��)�H");
		scanf("%s", moji);
		if (moji == "^z") {
			break;
		}
		printf("%s\n", moji);
	}
}