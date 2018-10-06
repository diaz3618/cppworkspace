#include <iostream>
#include <vector>
#include <list>
void test();

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
    int _find(std::string name);
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
        std::cout << "[" << index << "]\t" << ptr->name << "\t| age: " << ptr->age << std::endl;
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
    if(isempty(index) == true)
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

int Chain::_find(std::string name)
{
    /*
    Since I'm having trouble with collisions,
    this function assumes there's only one string
    in x index (for now). Once the collision problem
    is solved, this function will take O(n) [it is
    currently O(1)].
    */

    int index = _hash(name);

    if(isempty(index) == true)
    {
        std::cout << "index [" << index << "] is empty";
    }
    else if(hash_table[index]->name == name)
    {
        // Cout for testing
        std::cout << "String: " << name << "\tfound in index [" << index << "]";

        // Return index where entered string was found
        return index;
    }
}

void test()
{
    static const int N = 10000;
    int i, j, p, q, id[N], sz[N];

    for (int i = 0; i < N; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }

    while (std::cin >> p >> q)
    {
        for (int i = p; i != id[i]; i = id[i]);
        for (int j = q; j != id[j]; j = id[j]);

        if (i == j) continue;
        if(sz[i] < sz[j])
        {
            id[i] = j; sz[j] += sz[i];
        }
        else
        {
            id[j] = i; sz[i] += sz[j];
        }
        std::cout << " " << p << " " << q << std::endl;
    }
}

int main()
{
    test();
    /*
    Chain chain;

    // Add random data to test add function
    chain.add("Daniel", 26);
    chain.add("Dan", 26);
    chain.add("Jomarie" , 25);
    chain.add("Coral", 24);

    for(int i = 0; i < chain._size; i++)
    {
        chain.print_table(i);
    }

    // Testing find function
    std::cout << "\n\n";
    chain._find("Dan");
    std::cout << "\n\n";

    // Print x index
    chain.print_table(0);
    */

    test();

    return 0;
}




/* Irrelevant to the rest of this "project" */
typedef struct Double_str
    {
        std::string str1;
        std::string str2;
        Double_str *next;
    } double_str;

    double_str *T[10];

void _add(int index, std::string str)
{
    double_str *s1, *s2;

    s1->str1 = str;
    s1->str2 = str;
    s1->next = NULL;

    if(T[index] == NULL)
    {
        T[index] = s1;
    }

    else
    {
        for (s2 = T[index]; s2->next != NULL; s2 = s2->next)
        {
            s2->next = s1;
        }
    }
}
void test()
{
    for (int i = 0; i < 10; i++)
    {
        _add(i, "empty");
        //std::cout << T[i] << std::endl;
    }
}
