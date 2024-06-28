#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;
	srand(time(0));
	printf("何を出しますか？\n(1:グー　2:チョキ　3:パー)>");
	scanf("%d", &pl);
	cpu = rand() % 3 + 1;

	if (pl == 1) {
		printf("プレイヤーはグーです\n");
	}
	else {
		if (pl == 2) {
			printf("プレイヤーはチョキです\n");
		}
		else {
			if (pl == 3) {
				printf("プレイヤーはパーです\n");
			}
		}
	}
	if (cpu == 1) {
		printf("コンピュータはグーです\n");
	}
	else {
		if (cpu == 2) {
			printf("コンピュータはチョキです\n");
		}
		else {
			if (cpu == 3) {
				printf("コンピュータはパーです\n");
			}
		}
	}

	if (cpu == pl) {
		printf("あいこです\n");
	}
	if ((pl + 1) % 4 == cpu) {
		printf("プレイヤーの勝ちです\n");
	}
	if ((cpu + 1) % 4 == pl) {
		printf("コンピュータの勝ちです\n");
	}
}