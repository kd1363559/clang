#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;
	printf("探査値を入力:");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (d[i] == s) {
			break;
		}
	}
	if (i==10) {
		printf("見つからなかった\n");

	}
	else {
		printf("探査値%dを、%dで発見\n",s, i);
	}
}