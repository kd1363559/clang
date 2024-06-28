#include<stdio.h>
#include<stdlib.h>
main()
{
	int sum;
	char moji;
	float avg;
	int i=0;
	sum = 0; 
	printf("整数　（^zで終了）?");
	scanf("%c", &moji);
	while (moji != EOF) {
		printf("整数　（^zで終了）?");
		scanf("%c", &moji);
		if (moji == '^z') {
			break;
		}
		sum += atoi(&moji);
		i++;
	}
	avg = (float)sum / i;
	printf("合計＝%d\n平均＝%f.1",sum,avg);
}