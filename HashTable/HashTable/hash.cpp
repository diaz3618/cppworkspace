#include "hash.h"
/*
All other header files used are declared in hash.h,
unless one is specifically needed here.
*/

hash::hash()
{
	// Initialize
	for (int i = 0; i < table_size; i++)
	{
		Hash_Table[i] = new item;
		Hash_Table[i]->name		= "empty";
		Hash_Table[i]->drink	= "empty";
		Hash_Table[i]->next		= NULL;
	}
}

int hash::Hash(std::string key)
{
	int hash = 0;
	int index;
	
	for (int i = 0; i < key.length(); i++)
	{
		hash += (int)key[i];
	}

	index = hash % table_size;
	return index;
}

void hash::add_item(std::string name, std::string drink)
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

int hash::items_in_index(int index)
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
	return count;
}

void hash::print_table()
{
	int num;

	for (int i = 0; i < table_size; i++)
	{
		num = items_in_index(i);
		std::cout << "-------------------\n";
		std::cout << "Index: " << i << std::endl;
		std::cout << Hash_Table[i]->name << std::endl;
		std::cout << Hash_Table[i]->drink << std::endl;
		std::cout << "Number of items: " << num << std::endl;
		std::cout << "-------------------\n\n";
	}
}

void hash::print_items_in_index(int index)
{
	item *Ptr = Hash_Table[index];

	if (Ptr->name == "empty")
	{
		std::cout << "Index [" << index << "]: " << "= empty" << std::endl;
	}
	else
	{
		std::cout << "Index [" << index << "]: " << std::endl;

		while (Ptr != NULL)
		{
			std::cout << "-------------------\n";
			std::cout << Ptr->name << std::endl;
			std::cout << Ptr->drink << std::endl;
			std::cout << "-------------------\n";

			Ptr = Ptr->next;
		}
	}
}