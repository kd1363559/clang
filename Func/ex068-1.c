#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("���l��3����");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret:%d\ta:%d\tb:%d\tc:%d\n", ret, a, b, c);

		printf("���l���P����");
		while (scanf("%d",&a)!=EOF) {
			ret = scanf("%d", &a);
			printf("���l�F%d\n",a);
			printf("���l���P����(ctrl+z�ŏI��):");
		}
}