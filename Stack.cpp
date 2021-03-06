// Stack

#include "stdafx.h"
#include "iostream"

using namespace std;

struct node_s {
	int data;
	node_s*prev = nullptr;
};
struct inf_s {
	unsigned int size = 0;
	node_s*top;
 };

void push(int new_data, inf_s* inf);
int pop(node_s* top, inf_s* inf);

int main()
{
	inf_s* inf = new inf_s;
	push(10, inf);
	push(20, inf);
	cout << inf->size << endl;
	cout << pop(inf->top, inf) << endl;
	cout << pop(inf->top, inf) << endl;
	system("pause");
    return 0;
}

void push(int new_data, inf_s* inf) {
	node_s* node = new node_s;
	node->data = new_data;
	node->prev = inf->top;
	inf->top = node;
	inf->size++;
}

int pop(node_s*top, inf_s* inf) {
	int save_data = top->data;
	inf->top = top->prev;
	delete top;
	inf->size--;
	return save_data;
}

