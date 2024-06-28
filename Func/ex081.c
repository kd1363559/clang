#include<stdio.h>
#include<string.h>
void syoujyun(int tbl[], int cnt);
void koujyun(int tbl[], int cnt);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char s[128];
	printf("ソート方向を入力：");
	scanf("%s", &s);
	if (strcmp(s, "昇順") == 0) { syoujyun(data, 8); }
	if (strcmp(s, "降順") == 0) { syoujyun(data, 8); }
	for (i = 0; i < 8; i++) {
		printf("%d", data[i]);
	}
	
}

void syoujyun(int tbl[], int cnt) {
	int m;
	for (int i = 0; i < cnt; i++) {
		if ((int strcmp(tbl[i]), int strcmp(tbl[i + 1]) == -1) {
			m = tbl[i];
			tbl[i] = tbl[i + 1];
			tbl[i + 1] = m;
		}
	}
	return;
}
