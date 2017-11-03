
#include "ClassStack.h"
#include <iostream>


using namespace std;

int main() {
	Stack stack;
	for (int i = 1; i < 6; i++) {
		stack.push(i);
	}
	for (int i = 1; i < 6; i++) {
		stack.print();
	}
	for (int i = 1; i < 6; i++) {
		stack.pop();
	}
	cout << stack.empty() << endl;
	system("PAUSE");
	return 0;
}

class Stack {
private:
	int size;
	node_s *top;
public:
	Stack() {
		size = 0;
		top = nullptr;
	}
	~Stack() {}
	void push(int);
	int pop();
	void print();
	bool empty();
};

struct node_s {
	int data;
	node_s *prev;
};