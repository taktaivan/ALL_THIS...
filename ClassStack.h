
class Stack{
private:
	int size;
	node_s *top = new node_s;
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