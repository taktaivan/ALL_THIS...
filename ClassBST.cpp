#include "iostream"

using namespace std;

class BST {
private:
	struct node_s {
	int data = 0;
	node_s *left, *right = nullptr;
};
	node_s *root = nullptr;
	void add(int, node_s *t);
	void show(node_s *&t);
public:
	void add(int);
	bool isEmpty();
	void del();
	void show();
};

void BST::add(int new_data) {
	if (root == nullptr) {
		root = new node_s;
		root->data = new_data;
		return;
	}
	if (new_data <= root->data) {
		if (root->left != nullptr)
			add(new_data, root->left);
		else {
			root->left = new node_s;
			root->left->data = new_data;
			return;
		}
	}
	else {
		if (root->right != nullptr)
		add(new_data, root->right);
		else {
			root->right = new node_s;
			root->data = new_data;
			return;
		}
	}
}

void BST::add(int new_data, node_s *t) {
	if (new_data <= t->data) {
		if (t->left != nullptr)
			add(new_data, t->left);
		else {
			t->left = new node_s;
			t->left->data = new_data;
			return;
		}
	}
	else {
		if (t->right != nullptr)
			add(new_data, t->right);
		else {
			t->right = new node_s;
			t->data = new_data;
			return;
		}
	}
}

bool BST::isEmpty(){
	if (root == nullptr)
		return true;
	else return false;
}

void BST::del() {

}

void BST::show() {
	if (root != nullptr) {
		show(*&root->right);
		cout << root->data << endl;
		show(*&root->left);
	}
}
void BST::show(node_s *&t) {
	if (t != nullptr) {
		if (t->right != nullptr)
			show(*&t->right);
		cout << t->data << endl;
		if (t->left != nullptr)
			show(*&t->left);
	}
}

int main() {
	BST tree;
	for (int i = 1; i < 6; ++i) {
		tree.add(i);
	}
	tree.show();
	system("PAUSE");
	return 0;
}