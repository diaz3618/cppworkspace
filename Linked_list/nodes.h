template <typename T>
class Node
{
public:
    T Value;
    Node *Next;

    Node(T value) : Value(value) {}
};

template <typename T>
// Print linked list
void print(Node<T> *node)
{
    while(node != NULL)
    {
        std::cout << node->Value << " -> ";

        node = node->Next;
    }

    std::cout << "NULL" << std::endl;
}

