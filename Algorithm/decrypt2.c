#include<stdio.h>
main()
{
	char s[20];
	int i, k[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]‚Ì•œ†‰»ƒL[„",i);
		scanf("%d", &k[i]);

		s[i] -= k[i];
		i++;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA % s\n", s);
}