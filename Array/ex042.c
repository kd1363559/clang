#include<stdio.h>
main()
{
	int i;
	char data[]="Apple";
	printf("一文字ずつ表示\n");
	i = 0;
	while (data[i]!='\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n");
	printf("文字列で表示\n");
	printf("%s\n",&data[0]);
}