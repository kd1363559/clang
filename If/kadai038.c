#include<stdio.h>
main()
{
	char moji;
	printf("�P�������́H");
	scanf("%c", &moji);
	if (moji > 0x41 && moji < 0x5A) {
		moji += 0x20;
		printf("%c", moji);
	}
	else {
		if(moji > 0x61 && moji < 0x7A) {
			moji -= 0x20;
			printf("%c", moji);
		}
		else {
			printf("%c", moji);
		}
	}
}