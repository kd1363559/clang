#include<stdio.h>
main()
{
	char moji;
	printf("１文字入力:");
	scanf("%c", &moji);
	printf("入力文字＝%c\n", moji);
}
//char型は１バイト（８ビット）
//その他のデータ型（intやfloatなど）は処理系による