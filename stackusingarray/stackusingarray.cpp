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

	int push(int element) {
		if (top == 4) {
			cout << "number of data exceed the limit" << endl;
			return 0;
		}

		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
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
};
