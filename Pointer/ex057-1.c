#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					{40,50,60},
					{70,80,90} };

	int* p_tbl, i,m;
	p_tbl = tbl[1];
	printf("�Q�����z��tbl�̓��e\n");
	for (m = 0; m < 3; m++) {
		printf(" %d ", *p_tbl++);
	}
}