// Queue

#include "stdafx.h"
#include "iostream"

using namespace std;

struct queue_s{
	int data;
	queue_s*next = nullptr;
};

struct inf_s {
	int size = 0;
	queue_s*first;
	queue_s*last;
};

void push(int new_data, inf_s* inf);
int pop(inf_s* inf);

int main()
{
	inf_s* inf = new inf_s;
	push(1, inf);
	push(2, inf);
	push(3, inf);
	cout << pop(inf) << endl;
	cout << pop(inf) << endl;
	cout << pop(inf) << endl;
	system("pause");
	return 0;
}

void push(int new_data, inf_s* inf) {
	queue_s* queue = new queue_s;
	queue->data = new_data;
	if (inf->size == 0) {
		inf->first = queue;
		inf->last = inf->first;
	}

	inf->last->next = queue;
	inf->last = queue;
	inf->size++;
}

int pop(inf_s* inf) {
	int data;
	data = inf->first->data;
	inf->first = inf->first->next;
	inf->size--;
	return data;
}