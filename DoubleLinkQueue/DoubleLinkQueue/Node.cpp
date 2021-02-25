#include "Node.h"

Node::Node(int data) : m_data{ data }, m_next{ nullptr }, m_previous{ nullptr }{}

int Node::getData()
{
	return m_data;
}

void Node::setData(int data)
{
	m_data = data;
}

Node* Node::getNext()
{
	return m_next;
}

Node* Node::getPrevious()
{
	return m_previous;
}

void Node::setNext(Node* previous)
{
	m_next = previous;
}

void Node::setPrevious(Node* next)
{
	m_previous = next;
}