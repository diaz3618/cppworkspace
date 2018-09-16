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
	void Add_Item(std::string name, std::string drink);
};

#endif // !HASH_H