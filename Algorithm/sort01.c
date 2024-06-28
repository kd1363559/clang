#include<stdio.h>
main()
{
	int i, j,w;
	int d[5] = { 30,7,25,16,10 };
	printf("ソート前\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d\t", d[i]);
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (d[j] < d[i])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("ソート後\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d\t", d[i]);
	}
}