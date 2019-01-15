/*
    If you took the time to read this,
    feel free to give some constructive criticism.

    (keep in mind that this is just for practice,
     not to be used for anything "useful")
*/

#include <iostream>
#include "include/ordered_vector.h"


int main(int argc, char **argv) {
    ordered_vector<int> sorted_vector = { 5, 1, 7, 9 };
	sorted_vector.push(0);


	std::cout << "Range for loop: \n";
	int index = 0;
	for (auto x : sorted_vector.dump_data()) {
		std::cout << "sorted_vector[" << index << "] = " << x << "\n";
		index++;
    }


    std::cout << "\nFor loop: \n";
    for(int i = 0; i < sorted_vector.size(); i++) {
        std::cout << "sorted_vector[" << i << "] = " << sorted_vector[i] << "\n";
    }

    std::cout << "\n\nsorted_vector[3] = " << sorted_vector[3] << std::endl;

	return 0;
}
