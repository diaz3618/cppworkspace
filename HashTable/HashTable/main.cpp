// Tutorial by Paul Programming
// https://www.youtube.com/channel/UCcDGsN3JxMavDkM9INRLGFA

#include "hash.h"

int main(int argc, char *argv)
{
	int index;
	hash Hash;

	index = Hash.Hash("Paul");

	std::cout << /*Index size*/ "String size: " << index << std::endl;

	int t;	std::cin >> t;	// Pause until key is pressed

	return 0;
}