#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu,i;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		kazu = rand() % 100;
		if (kazu < 10) {
			printf("�X�[�p�[���A����������\n");
		}
		else {
			printf("���A������\n");
		}

	}

}