#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;
	srand(time(0));
	printf("�����o���܂����H\n(1:�O�[�@2:�`���L�@3:�p�[)>");
	scanf("%d", &pl);
	cpu = rand() % 3 + 1;

	if (pl == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	else {
		if (pl == 2) {
			printf("�v���C���[�̓`���L�ł�\n");
		}
		else {
			if (pl == 3) {
				printf("�v���C���[�̓p�[�ł�\n");
			}
		}
	}
	if (cpu == 1) {
		printf("�R���s���[�^�̓O�[�ł�\n");
	}
	else {
		if (cpu == 2) {
			printf("�R���s���[�^�̓`���L�ł�\n");
		}
		else {
			if (cpu == 3) {
				printf("�R���s���[�^�̓p�[�ł�\n");
			}
		}
	}

	if (cpu == pl) {
		printf("�������ł�\n");
	}
	if ((pl + 1) % 4 == cpu) {
		printf("�v���C���[�̏����ł�\n");
	}
	if ((cpu + 1) % 4 == pl) {
		printf("�R���s���[�^�̏����ł�\n");
	}
}