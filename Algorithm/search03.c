#include<stdio.h>
main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int low, high, s, mid, i;

	printf("探索値を入力:");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;//添え字の中間地点を求める

		if (s == d[mid]) {
			break;
		}
		else {
			if (s > d[mid]) {
				low = mid + 1;
			}
			else {
				if (s < d[mid]) {
					high = mid - 1;
				}
			}
		}

		}
	if (low > high) {
		printf("見つからなかった\n");
	}
	else {
		printf("d[%d]で%dを発見\n", mid,s);
	}
}