#include<stdio.h>
main()
{
	int h, m, s;
	printf("秒数を入力");
	scanf("%d", &s);
	if (s > 5000)
	{
		printf("エラー\n");
	}
	else
	{
		h = s / 3600;
		m = (s % 3600) / 60;
		s = (s % 3600) % 60;
		printf("%d時間%d分%d秒です\n", h, m, s);
	}
}