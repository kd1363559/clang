#include<stdio.h>
int add(int a, int b);
int hiku(int a, int b);
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は%dです\n", add(a,b));
	printf("引き算は%dです\n", hiku(a, b));
	printf("掛け算は%dです\n", kake(a, b));
	printf("割り算は%dです\n", wari(a, b));
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}
int hiku(int a, int b)
{
	int ans;
	ans = a - b;
	return(ans);
}
int kake(int a, int b)
{
	int ans;
	ans = a * b;
	return(ans);
}
int wari(int a, int b)
{
	int ans;
	ans = a / b;
	return(ans);
}