#include <iostream>
#include "ordered_vector.h"

int main(int argc, char **argv) {
	ordered_vector<int> test = { 5, 1, 7, 9 };
	test.push(0);

	std::cout << test[3] << "\n\n";

	for (auto x : test.dump_data())
		std::cout << x << " ";


	return 0;
}