#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max, min,i;
	
	for (i = 0, max = data[i],min=data[i]; i<9; i++) {
		if (max < data[i + 1]) {
			max = data[i + 1];
		}
		if (min > data[i + 1]) {
			min = data[i + 1];
		}
	}
	data[i] = '\0';
	printf("”z—ñdata=");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%d ", data[i]);
	}


	printf("\nÅ‘å’l=%d\tÅ¬’l%d\n", max,min);
}