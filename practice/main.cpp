#include <iostream>
#include <vector>
//using namespace std;

class Chain
{
private:
    struct Link
    {
        std::string name;
        int age;
        Link *next;
    };

    static const int table_size = 11;
    Link *hash_table[table_size];

public:
    static const int _size = table_size;
    Chain();
    void print_table(int index);
    int _hash(std::string name);
    void add(std::string name, int age);
    bool isempty(int index);
    void _find(std::string name);
};

// Constructor/Initialize
Chain::Chain()
{
    for(int i = 0; i < table_size; i++)
    {
        hash_table[i]       = new Link;
        hash_table[i]->name = "empty";
        hash_table[i]->age  = 0;
        hash_table[i]->next = NULL;
    }
}

void Chain::print_table(int index)
{
    int i = 0;
    Link *ptr = hash_table[index];

    while(ptr != NULL)
    {
        std::cout << "[" << index << "]\t" << ptr->name << ", age: " << ptr->age << std::endl;
        ptr = ptr->next;
        i++;
    }
}

int Chain::_hash(std::string name)
{
    int hash_index = 0;

    for(int i = 0; i < name.length(); i++)
    {
        hash_index += (int)name[i];
    }

    return hash_index % table_size;
}

void Chain::add(std::string name, int age)
{
    int index = _hash(name);

    // Create head link
    if(hash_table[index]->name == "empty")
    {
        hash_table[index]->name = name;
        hash_table[index]->age = age;
    }
    else
    {
        Link *ptr = hash_table[index];
        Link *new_link = new Link;

        new_link->name  = name;
        new_link->age   = age;
        new_link->next  = NULL;

        while(ptr != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_link;
    }
}

bool Chain::isempty(int index)
{
    if(hash_table[index]->name == "empty")
    { return true; }
    else
    { return false; }
}

void Chain::_find(std::string name)
{
    int index = _hash(name);

    if(isempty(index) == true)
    {
        std::cout << "index [" << index << "] is empty";
    }
    else
    {
        if(hash_table[index]->name == name)
        {
            std::cout << "String: " << name << "\tfound in index [" << index << "]";
        }
    }
}

int main()
{
    Chain chain;

    chain.add("Daniel", 26);
    chain.add("Dan", 26);
    chain.add("Jomarie" , 25);
    chain.add("Coral", 24);

    for(int i = 0; i < chain._size; i++)
    {
        chain.print_table(i);
    }

    std::cout << "\n\n";
    chain._find("Dan");
    std::cout << "\n\n";

    return 0;
}
