#include<stdio.h>
main()
{
	char s[20], k[20];
	int i;
	printf("���������͂��ĉ�������");
	scanf("%s", &s[0]);
	i = 0;
	printf("�������L�[��", i);
	scanf("%s", &k[i]);

	while (s[i] != '\0') {
	
		k[i] = k[i] - '0';
		s[i] -= k[i];
		i++;
	}
	printf("�������ςݕ�����́A % s\n", s);
}