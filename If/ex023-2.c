#include<stdio.h>
main()
{
	int y;
	printf("��������");
	scanf("%d", &y);
	if (y%4==0)
	{
		if (y % 100 == 0)
		{
			if ( y % 400 == 0)
			{
				printf("���邤�N�ł�");
			}
			else 
			{
				printf("���邤�N�ł͂Ȃ�");
			}
		}
	}
	else
	{
		printf("���邤�N�ł͂Ȃ�");
	}
}