#include<stdio.h>
main()
{
	int i;
	char data[]="Apple";
	printf("�ꕶ�����\��\n");
	i = 0;
	while (data[i]!='\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n");
	printf("������ŕ\��\n");
	printf("%s\n",&data[0]);
}