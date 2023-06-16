#include <iostream>
#include <string>

using namespace std;

class stackArray {
private:
	int stack_array[5];
	int top;

public:
	//contruktor
	stackArray() {
		top = -1;
	}

	void push() {
		int element;
		if (top == 4) {
			cout << "number of data exceed the limit" << endl;
			return ;
		}

		top++;
		stack_array[top];
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		
	}

	void pop() {
		if (empty()) {
			cout << "\nstack is empty. cannot pop." << endl;//1.a
			return; //2.a
		}

		cout << "the popped element is : " << stack_array[top] << endl;
		top--;//step 3 decrement
	}

	// methodfor for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nstack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackArray s;
	char ch;


	while (true) {
		cout << endl;
		cout << "\nstack array\n";
		cout << "\n1.push\n";
		cout << "\n2.pop\n";
		cout << "\n3.display\n";
		cout << "\n4.exit\n";
		cout << "enter your choice";
		cin >> ch;

