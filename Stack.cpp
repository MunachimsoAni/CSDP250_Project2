#include <iostream>
#include "Stack.h"
#include "Stack.h"

using namespace std;

Stack::Stack() {
	top = nullptr;
}

Stack::~Stack() {
	clear();
}

void Stack::clear(){
	StackNode* nodePtr = nullptr;
	StackNode* nextPtr = nullptr;
	nodePtr = top;

	while (nodePtr != nullptr) {
		nextPtr = nodePtr->next;
		delete nodePtr;
		nodePtr = nextPtr;
	}
}

void Stack::push(int num) {
	//Step 1: Create a new node
	StackNode* newNode = nullptr;
	newNode = new StackNode;
	newNode->digits = num;
	//Step 2: Push the new node in List
	//Case 1: if stack is empty
	if (isEmpty()) {
		top = newNode;
		newNode->next = nullptr;
	}
	else {
		newNode -> next = top;
		top = newNode;
	}
}

int Stack::peak() {
	int temp;
	temp = top->digits;
	return temp;
}

void Stack:: pop(int& num) {
	StackNode* temp = nullptr;
	if (isEmpty()) {
		cout << "Stcak is empty\n";
	}
	else {
		num = top->digits;
		temp = top->next;
		delete top;
		top = temp;
	}
}

bool Stack::isEmpty()const {
	if (!top) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::displayStack()const {
	if (isEmpty()) {
		cout << "Stack is empty" << endl;
	}
	else {
		StackNode* current = top;
		while (current != nullptr) {
			cout << current->digits;
			current = current->next;
		}
	}
}