#include <iostream>
#include "Queue.h"

using namespace std;

//Constructor & Deconstructor

Queue::Queue() {
	//value = 0;
	frontPtr = nullptr;
	rearPtr = nullptr;
}

Queue::~Queue() {
	clear();
}

void Queue::enqueue(int num) {
	//Step 1: Create a new node
	QueueNode* newNode = nullptr;
	newNode = new QueueNode;
	newNode->value = num;
	newNode->next = nullptr;

	//Step 2: Append it at the end of list
	if (isEmpty()) {
		frontPtr = newNode;
		rearPtr = newNode;
	}
	else {
		rearPtr->next = newNode;
		newNode->next = nullptr;
		rearPtr = newNode;
	}
}

void Queue::dequeue(int& num) {
	//case 1: It is empty and you cannot dequeue
	QueueNode* tempPtr = nullptr;
	if (isEmpty()) {
		cout << "The queue is empty!";
	}
	else {
		num = frontPtr->value;
		tempPtr = frontPtr;
		frontPtr = frontPtr->next;
		delete tempPtr;
	}
}

void Queue::clear() {
	int n;
	while (!isEmpty()) {
		dequeue(n);
	}
}

void Queue::displayQueue()const {
	QueueNode* nodePtr;
	nodePtr = frontPtr;

	while (nodePtr) {
		cout << nodePtr->value;
		nodePtr = nodePtr->next;
	}
}

bool Queue::isEmpty()const {
	if (rearPtr == nullptr || frontPtr == nullptr) {
		return true;
	}
	else {
		return false;
	}
}