#include<stdio.h>
main()
{
	float i,su1, su2, su3;
	char  m;
	printf("��������́F");
	scanf("%c", &m);
	if (m == 'd' || m == 'D' || m == 's' || m == 'S' || m == 'g' || m == 'G' || m == 'h' || m == 'H') {
		printf("���������");
		scanf("%f%f%f", &su1, &su2, &su3);
		if (m == 'd' || m == 'D') {
			m = 1;
		}
		if (m == 's' || m == 'S') {
			m = 2;
		}
		if (m == 'g' || m == 'G') {
			m = 3;
		}
		if (m == 'h' || m == 'H') {
			m = 4;
		}
		printf("%c", m);
		switch (m) {
		case 1:
			i = su1;
			if (i < su2) {
				i = su2;
			}
			if (i < su3) {
				i = su3;
			}
			printf("�ő�l��%.2f�ł�\n", i);
			break;
		case 2:
			i = su1;
			if (i > su2) {
				i = su2;
			}
			if (i > su3) {
				i = su3;
			}
			printf("�ŏ��l��%.2f�ł�\n", i);
			break;
		case 3:
			i = su1 + su2 + su3;
			printf("���v��%.2f�ł�\n", i);
			break;
		case 4:
			i = (su1 + su2 + su3) / 3;
			printf("���ς�%.2f�ł�\n", i);
		default:
			printf("�G���[");
		}
	}
}