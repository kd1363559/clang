#include<stdio.h>
#include<string.h>
main()
{
	int cnt;
	char str[] = "orange";

	cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("������F%s\n", &str[0]);
	printf("��������%d����\n", cnt);
	printf("��������%d����\n", strlen(str));
}