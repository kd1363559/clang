#include<stdio.h>
main()
{
	int h, m, s;
	printf("�b�������");
	scanf("%d", &s);
	if (s <= 5000)
	{
		if (s >= 0) {
			h = s / 3600;
			m = (s % 3600) / 60;
			s = (s % 3600) % 60;
			printf("%d����%d��%d�b�ł�\n", h, m, s);
		}
		else {
			printf("�}�C�i�X�̓G���[�ł�\n");
		}
	}
	else
	{
		printf("���͂͂T�O�O�O�܂łł�");		
	}
}