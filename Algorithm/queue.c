#include<stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;

	do {

		printf("\n\n���~�L���[��i�A�ŃL���[��o����́�");
		key = getche();
		printf("\n");

		//
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n***�L���[�������ς��ł�***\n");
			}
			else {
				display();
			}
		}


		//
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n***�L���[����ł�***\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n",data);
				display();
			}
		}
	} while (key != 'e');
}


//
void display(void)
{
	int i;
	printf("\n===���݂�k�L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head) {
			printf("��head�������Ă��鏊�i����head��%d)", head);
		}
		if (i == tail) {
			printf("��tail�������Ă��鏊�i����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}

int push(int d)
{
	if ((tail+1)% QUEUESIZE==head) { return -1; }
	queue[tail] = d;
	queue++;
	return 0;
}

int pop(int* pd)
{
	if (head==tail) { return -1; }
	head++;
	*pd = queue[head];
	queue[head] = 0;
	head = head % QUEUESIZE;
	return 0;
}
