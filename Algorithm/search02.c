#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;

	printf("探索値を入力してください")
	scanf("%d", &s);
	d[10] = s;
	i = 0;
	while (s != d[i]) {
		i++;
	}
	if (i == 10) {
		printf("見つからなかった\n");

	}
	else {
		printf("配列dの%d番目\n", i);
	}
}