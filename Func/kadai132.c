#include<stdio.h>
#include<stdlib.h>
main()
{
	int sum;
	char moji;
	float avg;
	int i=0;
	sum = 0; 
	printf("�����@�i^z�ŏI���j?");
	scanf("%c", &moji);
	while (moji != EOF) {
		printf("�����@�i^z�ŏI���j?");
		scanf("%c", &moji);
		if (moji == '^z') {
			break;
		}
		sum += atoi(&moji);
		i++;
	}
	avg = (float)sum / i;
	printf("���v��%d\n���ρ�%f.1",sum,avg);
}