#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data,moji;
	int i;
	printf("data[ ]=%s\n", data);
	printf("検索文字は？");
	scanf("%c", &moji);
	printf("検索結果は");
	i = 0;
	while (*(p_data+i)) {
		if (*(p_data+i) == moji) {
			printf("%3d",i+1);
		}
		i++;
	}
		printf("文字目です");
}