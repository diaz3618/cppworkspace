#include <iostream>

template <typename T>
class LinkedList
{
private:
    int m_count;

public:
    Node<T> *Head;
    Node<T> *Tail;

    // Constructor
    LinkedList();

    // Get() operator
    Node<T> *Get(int index);

    // Insert operations
    void InsertHead(T val);
    void InsertTail(T val);
    void Insert(T index, T val);

    // Search
    int Search(T val);

    // Remove
    void RemoveHead();
    void RemoveTail();
    void Remove(T index);

    // Additional operations
    int Count();
    void PrintList();
};


int main(int argc, char *argv)
{
    NULL;

    return 0;
}
