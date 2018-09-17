// Tutorial by Paul Programming
// https://www.youtube.com/channel/UCcDGsN3JxMavDkM9INRLGFA

#include "hash.h"

int main(int argc, char *argv)
{
	hash Hash;

	// Add random data
	Hash.add_item("Daniel", "Water");
	Hash.add_item("Jomarie", "Lemonade");
	Hash.add_item("Smith", "Vodka");
	Hash.add_item("John", "Whiskey");
	Hash.add_item("Bob", "Juice");
	Hash.add_item("Sam", "Wine");
	Hash.add_item("Jane", "Sangria");
	Hash.add_item("Mark", "Coffe");
	Hash.add_item("Iroh", "Tea");
	Hash.add_item("Joe", "Beer");

	// Print hash table
	//Hash.print_table();

	Hash.print_items_in_index(2);


	// "pause" (not really)
	int t; std::cin >> t;

	return 0;
}