#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data = data;
	int i;
	printf("�|�C���^���Œ�ŕ\��\n");
	printf("�z�� data[ ]=");
	for (i = 0; *(p_data + i) != -999; i++) {
		
			if (i > 0) {
				printf(",");
			}
		printf("%d", *(p_data + i));

	}
	printf("\n");
	printf("�z�� data[ ]=");
	for (i = 0; *p_data!=-999; i++,p_data++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", *p_data);
	}
}