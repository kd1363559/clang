#include<stdio.h>
main()
{
	int y;
	printf("西暦を入力");
	scanf("%d", &y);
	if (y%4==0)
	{
		if (y % 100 == 0)
		{
			if ( y % 400 == 0)
			{
				printf("うるう年です");
			}
			else 
			{
				printf("うるう年ではない");
			}
		}
	}
	else
	{
		printf("うるう年ではない");
	}
}