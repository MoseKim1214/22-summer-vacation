#include <iostream>
using namespace std;

class Stack {
private:
	int arr[10000];
	int size;
public:
	Stack() {
		size = 0;
	}

	void push(int data) {
		arr[size] = data;
		size++;
	}
	void pop() {
		arr[size - 1] = 0;
		size--;
	}
	int top() {
		return arr[size - 1];
	}
};

