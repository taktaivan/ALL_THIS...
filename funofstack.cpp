#include "ClassStack.h"
#include <iostream>

using namespace std;

void Stack::push(int new_data) {
	node_s* node = new node_s;
	node->data = new_data;
	node->prev = top;
	top = node;
	size++;
}

int Stack::pop() {
	if (size == 0) {
		cout << "The stack is empty" << endl;
		return -1;
	}
	else {
		int save_data = top->data;
		node_s* p = new node_s;
		p = top;
		top = top->prev;
		delete p;
		size--;
		return save_data;
	}
}

void Stack::print() {
	node_s* p = new node_s;
	p = top;
	while (p) {
		cout << p->data << endl;
		p = p->prev;
	}
}

bool Stack::empty() {
	if (size == 0)
		return true;
	else
		return false;
}