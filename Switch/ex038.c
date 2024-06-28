#include<stdio.h>
main()
{
	int num;
	printf("®”‚ð“ü—ÍF");
	scanf("%d", &num);
	if (num >= 10 && num <= 49) {
		switch (num / 10) {
		case 1:
			printf("10“_‘ä\n");
			break;
		case 2:
			printf("20“_‘ä\n");
			break;
		case 3:
			printf("30“_‘ä\n");
			break;
		case 4:
			printf("40“_‘ä\n");
			break;
		}
	}
	else {
		printf("ƒGƒ‰[F‚P‚O`‚S‚X‚Ì”ÍˆÍ‚ð“ü‚ê‚Ä‚­‚¾‚³‚¢\n");
	}
}