#include<stdio.h>
#include<stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include<time.h>//�������g���Ƃ��ɕK�v�ł�

main()
{
	int kazu;

	srand(time(0));//�������������i�V���b�t���j����
	kazu = rand();//�O�`�R�Q�V�U�V�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);

	kazu = rand();//�O�`�R�Q�V�U�V�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
	
	kazu = rand();//�O�`�R�Q�V�U�V�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);

}