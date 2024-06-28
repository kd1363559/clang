#include<stdio.h>
#include<string.h>
void syoujyun(int tbl[], int cnt);
void koujyun(int tbl[], int cnt);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int i;
	char s[128];
	printf("ソート方向を入力：");
	scanf("%s", &s);
	if (strcmp(s, "昇順") == 0) { syoujyun(data, 8); }
	if (strcmp(s, "降順") == 0) { syoujyun(data, 8); }
	for (i = 0; i < 8; i++) {
		printf("%d ", data[i]);
	}
	
}

void syoujyun(int tbl[], int cnt) {
	int i,j,w;
	for ( i = 0; i < cnt; i++) {
		for (j = i + 1; j < cnt; j++) {
			if (tbl[i]>tbl[j]){
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
	return;
}
void koujyun(int tbl[], int cnt) {
	int i, j, w;
	for (i = 0; i < cnt; i++) {
		for (j = i + 1; j < cnt; j++) {
			if (tbl[i] < tbl[j]) {
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
	return;
}