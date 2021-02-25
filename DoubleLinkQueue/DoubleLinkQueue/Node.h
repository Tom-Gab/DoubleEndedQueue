#ifndef NODE_H
#define NODE_H

class Node
{
private:
	int m_data; // �l�ment contenant les donn�es
	Node* m_next; // lien vers la prochaine donn�e de la s�rie
	Node* m_previous;// lien vers la donn�e pr�c�dente de la s�rie
public:
	Node(int data);
	int getData();
	void setData(int data);
	Node* getNext();
	Node* getPrevious();
	void setNext(Node* next);
	void setPrevious(Node* previous);
};

#endif 
