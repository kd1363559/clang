#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					{40,50,60},
					{70,80,90} };

	int* p_tbl, i,m;
	p_tbl = tbl[0];
	printf("‚QŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (m = 0; m < (3*3); m++) {
		if (m % 3 == 1) {
			printf(" %d ", *p_tbl);
		}
		p_tbl++;
	}
}