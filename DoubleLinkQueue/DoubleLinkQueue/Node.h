#ifndef NODE_H
#define NODE_H

class Node
{
private:
	int m_data; // élément contenant les données
	Node* m_next; // lien vers la prochaine donnée de la série
	Node* m_previous;// lien vers la donnée précédente de la série
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
