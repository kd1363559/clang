#include<stdio.h>
main()
{
	char c;
	char* p_c=&c;
	printf("1文字入力?");
	scanf("%c",&c);
	printf("次の文字は%c\n", *p_c+1 );

}