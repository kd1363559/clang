#include<stdio.h>
main()
{
	char s[20];
	int i, k[20];
	printf("���������͂��ĉ�������");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]�̕������L�[��",i);
		scanf("%d", &k[i]);

		s[i] -= k[i];
		i++;
	}
	printf("�������ςݕ�����́A % s\n", s);
}