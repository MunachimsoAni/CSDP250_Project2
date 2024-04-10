#ifndef Stack_h
#define Stack_h

class Stack {
private:
	struct StackNode {
		int digits;
		StackNode* next;
	};
	StackNode* top;
public:
	Stack();
	~Stack();
	void push(int);
	void pop(int&);
	int peak();
	bool isEmpty()const;
	void displayStack()const;
	void clear();
};


#endif
