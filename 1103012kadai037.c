//1103012 kadai037.c
#include<stdio.h>
main()
{
	int su,ans;
	printf("�O����P�O�O�܂ł̐���");
	scanf("%d", &su);
	if (su >= 90) {
		ans = 5;
	}
	else {
		if (su >= 80) {
			ans = 4;
		}
		else {
			if (su > 50) {
				ans = 3;
			}
			else {
				if (su > 30) {
					ans = 2;
				}
				else {
					ans = 1;
				}
			}
		}
	}
	printf("���̐��l�̔��茋�ʂ́u%d�v�ł�\n", ans);
}