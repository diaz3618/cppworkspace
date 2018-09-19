#include <iostream>
#include "nodes.h"
template <typename T>
class LinkedList;

int main(int argc, char *argv)
{
    Node<int> *node1 = new Node<int> (7);
    Node<int> *node2 = new Node<int> (17);
    Node<int> *node3 = new Node<int> (34);
    Node<int> *node4 = new Node<int> (15);
    Node<int> *node5 = new Node<int> (3);

    node1->Next = node2;
    node2->Next = node3;
    node3->Next = node4;
    node4->Next = node5;
    print(node1);

    return 0;
}

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
    void Insert(int index, T val);

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

template <typename T>
Node<T> *LinkedList<T>::Get(int index)
{
    // Check if out of bound
    if (index < 0 || index > m_count)   return NULL;

    // Start from head
    Node<T> *node = Head;

    // Iterate through linked list elements until it finds selected index
    for (int i = 0; i < index; ++i)
    {
        node = node->Next;
    }

    // Return node result
    return node;
}

template <typename T>
void LinkedList<T>::InsertHead(T val)
{
    // Create a new node
    Node<T> *node = new Node<T>(val);

    /*The current Head will no longer become
    a HEad, so the Next pointer of the new
    Node will point to the current Head*/
    node->Next = Head;

    // The new Node now become the Head
    Head = node;

    /*If the linked list is empty, the Tail
    is also the Head*/
    if (m_count == 0)   Tail = Head;

    // One element is added
    m_count++;
}

template <typename T>
void LinkedList<T>::InsertTail(T val)
{
    /*If the linked list is empty,
    just simply invoke InsertHead()*/
    if (m_count == 0)
    {
        InsertHead(val);
        return;
    }

    // Create a new Node
    Node<T> *node = new Node<T>(val);

    /*The current Tail will no longer become a Tail,
    so the Next pointer of the current Tail will point
    to the new node*/
    Tail->Next = node;

    // The new Node now becomes the Tail
    Tail = node;

    // One element is added
    m_count++;
}

template <typename T>
void LinkedList<T>::Insert(int index, T val)
{
    // Check is out of bound
    if (index < 0 || index > m_count)   return;

    // If inserting a new Head
    if (index == 0)
    {
        InsertHead(val);
        return;
    }

    // If inserting a new Tail
    else if(index == m_count)
    {
        InsertTail(val);
        return;
    }

    // Start to find previous node from the Head
    Node<T> *prevNode = Head;

    /*Traverse the elements until
    the selected index is found*/
    for (int i = 0; i < index - 1; ++i)
    {
        prevNode = prevNode->Next;
    }

    /*Create the next node which is
    the element after previous node*/
    Node<T> *nextNode = prevNode->Next;

    // Create a new node
    Node<T> *node = new Node<T>(val);

    /*Insert this new node between the
    previous node and the next node*/
    node->Next = nextNode;
    prevNode->Next = node;

    // One element is added
    m_count++;
}
