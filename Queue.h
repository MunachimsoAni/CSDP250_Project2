#ifndef Queue_h
#define Queue_h

class Queue {
private:
	struct QueueNode {
		int value = 0;
		QueueNode* next;
	};
	QueueNode* frontPtr;
	QueueNode* rearPtr;

public:
	Queue();
	~Queue();

	void enqueue(int);
	void dequeue(int&);
	bool isEmpty()const;
	void clear();
	void displayQueue()const;
};
#endif
