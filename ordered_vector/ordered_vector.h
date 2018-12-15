#pragma once
#include <vector>
#include <algorithm>
#include <initializer_list>

template <class T>
class ordered_vector {
private:
	std::vector<T> container;

public:
	// Constructors
	ordered_vector(std::initializer_list<T> init);
	ordered_vector(T data);
	ordered_vector();

	// Operators
	T operator[](T index) const;

	// Functions
	std::vector<T> dump_data() const { return container; }
	void push(T data);
	std::vector<T> _sort(std::vector<T> vec) const;
	void _sort() { container = _sort(container); }

	~ordered_vector();
};
