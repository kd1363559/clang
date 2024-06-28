#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;

	printf("’Tõ’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢")
	scanf("%d", &s);
	d[10] = s;
	i = 0;
	while (s != d[i]) {
		i++;
	}
	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");

	}
	else {
		printf("”z—ñd‚Ì%d”Ô–Ú\n", i);
	}
}