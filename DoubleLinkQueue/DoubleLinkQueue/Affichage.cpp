// prog3_queue.cpp
//

#include "Queue.h"
#include <iostream>

int main()
{
    Queue file;

    file.enqueueBack(67);
    file.enqueueBack(39);
    file.enqueueBack(83);
    file.enqueueBack(42);
    file.enqueueFront(66);
    std::cout << "Premier element : " << file.getFront() << "\n";
    std::cout << "Dernier element : " << file.getBack() << "\n";
    std::cout << "La file : \n";
    file.afficherFile();

    file.dequeueFront();
    std::cout << "\n\nLa file avec 1 element de moins : \n";
    file.afficherFile();

    std::cout << "\n\nVider la file\n";
    while (!file.isEmpty())
    {
        file.dequeueFront();
    }

    std::cout << "\nEssayer front, back et dequeue avec une file vide : \n";
    file.getFront();
    file.getBack();
    file.dequeueFront();
}