#include "hash.h"
/*
All other header files used are declared in hash.h,
unless one is specifically needed here.
*/

hash::hash()
{
	for (int i = 0; i < table_size; i++)
	{
		Hash_Table[i] = new item;
		Hash_Table[i] -> name	= "empty";
		Hash_Table[i] -> drink	= "empty";
		Hash_Table[i] -> next	= NULL;

	}
}

int hash::Hash(std::string key)
{
	int hash = 0;
	int index;

	for (int i = 0; i < key.length(); i++)
	{
		hash += (int)key[i];
		std::cout << "key[" << i << "] = " << (int)key[i] << std::endl;
	}

	std::cout << "\n\nTotal index sum (hash variable): " << hash << std::endl;

	index = hash % table_size;
	return index;
}

void hash::Add_Item(std::string name, std::string drink)
{
	int index = Hash(name);

	if (Hash_Table[index]->name == "empty")
	{
		Hash_Table[index]->name = name;
		Hash_Table[index]->drink = drink;
	}
	else
	{
		item *Ptr = Hash_Table[index];
		item *n = new item;

		n->name = name;
		n->drink = drink;
		n->next = NULL;

		while (Ptr->next != NULL)
		{
			Ptr = Ptr->next;
		}
		Ptr->next = n;
	}
}

int hash::Items_In_Index(int index)
{
	int count = 0;

	if (Hash_Table[index]->name == "empty")
	{
		return count;
	}
	else
	{
		count++;
		item *Ptr = Hash_Table[index];
		
		while (Ptr->next != NULL)
		{
			count++;
			Ptr = Ptr->next;
		}
	}
}
