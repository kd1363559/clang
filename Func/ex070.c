#include<stdio.h>
int add(int a, int b);
int hiku(int a, int b);
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v��%d�ł�\n", add(a,b));
	printf("�����Z��%d�ł�\n", hiku(a, b));
	printf("�|���Z��%d�ł�\n", kake(a, b));
	printf("����Z��%d�ł�\n", wari(a, b));
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