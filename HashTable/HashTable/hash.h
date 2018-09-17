#pragma once
#ifndef HASH_H
#define HASH_H

#include <iostream>
#include <string>
#include <cstdlib>

class hash
{
private:
	static const int table_size = 10;

	struct item
	{
		std::string name;
		std::string drink;
		item *next;
	};

	item *Hash_Table[table_size];

public:
	hash();
	int Hash(std::string key);
	void add_item(std::string name, std::string drink);
	int items_in_index(int index);
	void print_table();
	void print_items_in_index(int index);
};

#endif // !HASH_H