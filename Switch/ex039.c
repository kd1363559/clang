#include<stdio.h>
main()
{
	float i,su1, su2, su3;
	char  m;
	printf("処理を入力：");
	scanf("%c", &m);
	if (m == 'd' || m == 'D' || m == 's' || m == 'S' || m == 'g' || m == 'G' || m == 'h' || m == 'H') {
		printf("整数を入力");
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
			printf("最大値は%.2fです\n", i);
			break;
		case 2:
			i = su1;
			if (i > su2) {
				i = su2;
			}
			if (i > su3) {
				i = su3;
			}
			printf("最小値は%.2fです\n", i);
			break;
		case 3:
			i = su1 + su2 + su3;
			printf("合計は%.2fです\n", i);
			break;
		case 4:
			i = (su1 + su2 + su3) / 3;
			printf("平均は%.2fです\n", i);
		default:
			printf("エラー");
		}
	}
}