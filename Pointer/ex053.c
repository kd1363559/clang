#include<stdio.h>
main()
{
	int a, b,*w;
	
	a = 100; b = 200;
	int *p_a=&a, *p_b=&b;
	printf("実行前：*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
	//ポインタに格納されたアドレスを入れ替え処理（ポインタ使用）
	w = p_a;
	p_a = p_b;
	p_b = w;
	printf("実行後：*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
}