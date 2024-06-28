#include<stdio.h>
#include<stdlib.h>//乱数を使うときに必要です
#include<time.h>//乱数を使うときに必要です

main()
{
	int dice;

	srand(time(0));//乱数を初期化（シャッフル）する
	dice = rand()%6+1;//０～３２７６７の範囲で乱数を求める
	printf("サイコロは%dです\n", dice);

}