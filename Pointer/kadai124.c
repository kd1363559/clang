#include<stdio.h>
main()
{
	char c;
	char* p_c=&c;
	printf("1��������?");
	scanf("%c",&c);
	printf("���̕�����%c\n", *p_c+1 );

}