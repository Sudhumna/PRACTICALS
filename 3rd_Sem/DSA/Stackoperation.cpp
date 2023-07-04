#include<iostream>
using namespace std;
#define max_size 15
class Stack { 
int data[max_size];
int top;
public: 
	void initialize(Stack& stack){
		stack.top = -1;
	}
	int isFull(Stack& stack) {
		return stack.top == max_size - 1;
	}
	int isEmpty(Stack& stack) {
		return stack.top == -1;
	}
	void push(Stack& stack, int& item) {
		if (isFull(stack)) {
			cout << "Stack overflow: cannot push" << endl;
		}
		else {
			data[++stack.top] = item;
		}
	}
	void pop(Stack& stack, int& item) {
		if (isEmpty(stack)) {
			cout << "Stack underflow: cannot pop" << endl;
		}
		else {	
			item = data[stack.top--];
		}
	}
	void freeStack(Stack& stack) {
		stack.top = -1;
	}	
};
int main(){
	Stack stack;
	stack.initialize(stack);
	cout << "1. Push()" <<endl; 
	cout << "2. Pop()"<< endl; 
	cout << "3. Free()" << endl;
	cout << "4. Exit()" << endl;
	int choice, item;
	do {
		cout << "Choose the operation you want:"; cin >> choice;
	switch (choice) {
	case 1:
		cout << "Push()" << endl;
		cout << "Enter the element you want to push: "; cin >> item;
		stack.push(stack,item); 
		break;
	case 2:
		cout << "Pop()" << endl;
		stack.pop(stack, item);
		cout << "Popped item: " << item <<endl; 
		break; 
	case 3:
		cout << "Free()" << endl;
		stack.freeStack(stack); cout<< "Stack freed." << endl;
		break; 
	case 4:
		cout << "Exit()" << endl;
		cout << "Exiting..." << endl;
		break;
	default:
		cout << "Invalid request." << endl;
	}
}
while (choice!=4); return 0;
}
