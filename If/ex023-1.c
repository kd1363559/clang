#include<stdio.h>
main()
{
	int h, m, s;
	printf("•b”‚ğ“ü—Í");
	scanf("%d", &s);
	if (s <= 5000)
	{
		if (s >= 0) {
			h = s / 3600;
			m = (s % 3600) / 60;
			s = (s % 3600) % 60;
			printf("%dŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
		}
		else {
			printf("ƒ}ƒCƒiƒX‚ÍƒGƒ‰[‚Å‚·\n");
		}
	}
	else
	{
		printf("“ü—Í‚Í‚T‚O‚O‚O‚Ü‚Å‚Å‚·");		
	}
}