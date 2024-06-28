#include<stdio.h>
main()
{
	int h, m, s;
	printf("•b”‚ğ“ü—Í");
	scanf("%d", &s);
	if (s > 5000)
	{
		printf("ƒGƒ‰[\n");
	}
	else
	{
		h = s / 3600;
		m = (s % 3600) / 60;
		s = (s % 3600) % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
	}
}