#include<stdio.h>
enum BitState {
	Base=0,				//0000 0000 通常状態
	Poison=1<<0,		//0000 0001 どく状態
	Sleep=1<<1,			//0000 0010 ねむり状態
	Paralysis=1<<2,		//0000 0100 まひ状態
	Burn=1<<3,			//0000 1000 やけど状態
	AtkUp=1<<4,			//0001 0000 攻撃力アップ状態
	AtkDown=1<<5,		//0010 0000 攻撃力ダウン状態
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);

}

void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");//複数の状態が含まれているかもしれないのでelseは使わない
	if (s & Poison)//１か０かの判断できる
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base) 
	{
		printf("通常状態\n");
	}
	printf("********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1：毒　２：睡眠　３：麻痺　４：火傷　５：攻撃力アップ　６：攻撃力ダウン　０：終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか？");
		printf("1：毒　２：睡眠　３：麻痺　４：火傷　５：攻撃力アップ　６：攻撃力ダウン　７：全解除　０：終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		}
	}
}