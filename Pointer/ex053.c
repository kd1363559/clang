#include<stdio.h>
main()
{
	int a, b,*w;
	
	a = 100; b = 200;
	int *p_a=&a, *p_b=&b;
	printf("���s�O�F*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
	//�|�C���^�Ɋi�[���ꂽ�A�h���X�����ւ������i�|�C���^�g�p�j
	w = p_a;
	p_a = p_b;
	p_b = w;
	printf("���s��F*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
}