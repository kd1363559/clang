#include<stdio.h>
main()
{
	float sum,avg,box[3];
	int i;
	for (sum=0,i = 0; i < 3; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	avg = sum / 3;
	printf("合計は%.2fです\n平均は%.2fです\n", sum, avg);

}