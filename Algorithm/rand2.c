#include<stdio.h>
#include<stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include<time.h>//�������g���Ƃ��ɕK�v�ł�

main()
{
	int dice;

	srand(time(0));//�������������i�V���b�t���j����
	dice = rand()%6+1;//�O�`�R�Q�V�U�V�͈̔͂ŗ��������߂�
	printf("�T�C�R����%d�ł�\n", dice);

}