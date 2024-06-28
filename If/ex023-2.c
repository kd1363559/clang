#include<stdio.h>
main()
{
	int y;
	printf("¼—ï‚ğ“ü—Í");
	scanf("%d", &y);
	if (y%4==0)
	{
		if (y % 100 == 0)
		{
			if ( y % 400 == 0)
			{
				printf("‚¤‚é‚¤”N‚Å‚·");
			}
			else 
			{
				printf("‚¤‚é‚¤”N‚Å‚Í‚È‚¢");
			}
		}
	}
	else
	{
		printf("‚¤‚é‚¤”N‚Å‚Í‚È‚¢");
	}
}