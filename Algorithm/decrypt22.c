#include<stdio.h>
main()
{
	char s[20], k[20];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s[0]);
	i = 0;
	printf("•œ†‰»ƒL[„", i);
	scanf("%s", &k[i]);

	while (s[i] != '\0') {
	
		k[i] = k[i] - '0';
		s[i] -= k[i];
		i++;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA % s\n", s);
}