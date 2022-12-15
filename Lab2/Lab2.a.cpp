#include <stdio.h>
#include <iostream>
#include <climits>
#include <queue>
using namespace std;

// queue sınıfı
class Queue {
public:
	int front, rear, size;
	unsigned capacity;
	int* array;
};

// Sıra oluşturmak için kullanılan fonksiyon kapasite = 0
Queue* createQueue(unsigned capacity)
{
	Queue* queue = new Queue();
	queue->capacity = capacity;
	queue->front = queue->size = 0;

	queue->rear = capacity - 1;
	queue->array = new int[queue->capacity];
	return queue;
}

// Sıranın dolu olup olmadığını sorgulayan fonksiyon
int isFull(Queue* queue)
{
	return (queue->size == queue->capacity);
}

// Sıranın boş olup olmadığını sorgulayan fonksiyon
int isEmpty(Queue* queue)
{
	return (queue->size == 0);
}

// Sıraya ekleme yapma fonksiyonu
void enqueue(Queue* queue, int item)
{
	if (isFull(queue))
		return;
	queue->rear = (queue->rear + 1)
		% queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
	cout << item << " enqueued to queue" << endl;
}

// Sıradan eleman silme fonksiyonu
int dequeue(Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1)
		% queue->capacity;
	queue->size = queue->size - 1;
	return item;
}

// Sıranın önündeki eleman
int front(Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}

// Sıranın sonundaki eleman
int rear(Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}

//Sırayı listeleme
void list_queue(Queue* queue)
{
	while (true)
	{
		if (isEmpty(queue))
		{
			break;
		}
		else
		{
			cout << front(queue) << " ";
			dequeue(queue);
		}
	}
	cout << endl;
}

void FrontToLast(Queue* queue, int qsize)
{
	if (qsize <= 0)
		return;
	
	enqueue(queue, front(queue));
	dequeue(queue);

	FrontToLast(queue, qsize - 1);
}

// Sıralama fonksiyonu
void sortQueue(Queue* queue)
{
	if (isEmpty(queue))
		return;

	int temp = front(queue);

	dequeue(queue);

	sortQueue(queue);

	pushInQueue(queue, temp, queue->size);
}

void pushInQueue(Queue* queue,int temp, int qsize)
{

	if (isEmpty(queue) || qsize == 0) {
		enqueue(queue, temp);
		return;
	}

	else if (temp <= front(queue)) {
		enqueue(queue, temp);

		FrontToLast(queue, qsize);
	}
	else {
		enqueue(queue, front(queue));
		dequeue(queue);
		pushInQueue(queue, temp, qsize - 1);
	}
}

int main()
{
	Queue* queue = createQueue(1000);

	enqueue(queue, 10);
	enqueue(queue, 30);
	enqueue(queue, 20);
	enqueue(queue, 40);	

	cout << dequeue(queue) << " dequeued from queue" << endl;

	cout << "Front item is " << front(queue) << endl;
	cout << "Rear item is " << rear(queue) << endl;

	list_queue(queue);

	enqueue(queue, 40);
	enqueue(queue, 30);
	enqueue(queue, 20);
	enqueue(queue, 10);

	sortQueue(queue);
	list_queue(queue);

	return 0;
}
