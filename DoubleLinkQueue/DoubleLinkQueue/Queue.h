#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue
{
private:
	Node* m_head;
	Node* m_tail;
	int m_size;
public:
	Queue();
	int getFront();
	int getBack();
	void enqueueBack(int data);
	void dequeueFront();
	bool isEmpty();
	void enqueueFront(int data);
	void dequeueBack();
	void afficherFile();

};

#endif 