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
		item *_new = new item;

		_new->name = name;
		_new->drink = drink;
		_new->next = NULL;

		while (Ptr->next != NULL)
		{
			Ptr = Ptr->next;
		}
		Ptr->next = _new;
	}
}