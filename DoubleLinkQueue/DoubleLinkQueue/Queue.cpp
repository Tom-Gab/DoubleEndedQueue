#include "Queue.h"
#include "Node.h"
#include <iostream>

Queue::Queue() : m_head{ nullptr }, m_tail{ nullptr }, m_size{ 0 }{}


bool Queue::isEmpty() {

	if (m_head == nullptr)
	{
		return true;
	}

	return false;
}

void Queue::enqueueBack(int data) {
	Node* temp{ new Node{data} };

	// Si c'est la premi�re insertion
	// faire pointer l'avant ET l'arri�re sur le nouveau noeud
	if (isEmpty())
	{
		m_head = temp;
		m_tail = temp;
	}

	m_tail->setNext(temp);
	m_tail = temp;

	m_size++;
}

void Queue::dequeueFront() {
	if (isEmpty())
	{
		std::cout << "\nFile vide!";
		return;
	}

	Node* temp = m_head;
	m_head = m_head->getNext();

	// Si on est au dernier �l�ment de la cha�ne
	// m_front devient nullptr et il faut mettre m_back � nullptr aussi
	// sinon m_back va continuer de pointer vers l'�l�ment que l'on va lib�rer de la m�moire
	if (m_head == nullptr)
	{
		m_tail = nullptr;
	}

	temp->setNext(nullptr);
	delete temp;

	m_size--;
}

void Queue::dequeueBack() {
	if (isEmpty())
	{
		std::cout << "\nFile vide!";
		return;
	}

	Node* temp = m_tail;
	m_tail = m_tail->getPrevious();

	
	if (m_tail == nullptr)
	{
		m_head = nullptr;
	}

	temp->setPrevious(nullptr);
	delete temp; 

	m_size--;
}

void Queue::enqueueFront(int data) {
	Node* temp{ new Node{data} };

	
	if (isEmpty())
	{
		m_head = temp;
		m_tail = temp;
	}

	m_head->setPrevious(temp);
	m_head = temp;

	m_size++;
}

int Queue::getFront()
{
	if (isEmpty())
	{
		std::cout << "\nFile vide!";
		return -1;
	}

	return m_head->getData();
}

int Queue::getBack()
{
	if (isEmpty())
	{
		std::cout << "\nFile vide!";
		return -1;
	}

	return m_tail->getData();
}

void Queue::afficherFile()
{
	std::cout << "FRONT ";
	Node* temp = m_head;
	while (temp != nullptr)
	{
		std::cout << temp->getData() << "->";
		temp = temp->getNext();
	}
	std::cout << " BACK\n";
}