#include<stdio.h>
main()
{
	int i;
	while (1) {
		printf("文字コード（－１で入力終了）?");
		scanf("%d", &i);
		if (i == -1) {
			break;
		}
		printf("%c\n", i);
	}
}