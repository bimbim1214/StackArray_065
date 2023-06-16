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
	}
};
