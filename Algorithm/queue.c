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

		printf("\n\n◆円キューはi、でキューはoを入力＞");
		key = getche();
		printf("\n");

		//
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n***キューがいっぱいです***\n");
			}
			else {
				display();
			}
		}


		//
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n***キューが空です***\n");
			}
			else {
				printf("キューからデータ(%d)を取り出しました\n",data);
				display();
			}
		}
	} while (key != 'e');
}


//
void display(void)
{
	int i;
	printf("\n===現在のkキューの内容===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head) {
			printf("←headが示している所（現在headは%d)", head);
		}
		if (i == tail) {
			printf("←tailが示している所（現在tailは%d)", tail);
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
