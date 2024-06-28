#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* p_data;
	int max, min;
	int i;
	p_data = data;
	printf("data[ ]");
	for (i = 0,max=*p_data,min=*p_data; *(p_data + i); i++) {
		if (i > 0) {
			printf(",");
		}if (max < *(p_data + i)) {
			max = *(p_data + i);
		}
		if (min > *(p_data + i)) {
			min = *(p_data + i);
		}
		printf("%d", *(p_data + i));
	}
	printf("\nÅ‘å’l=%d\nÅ¬’l=%d\n", max, min);

}