#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

template <class T>
class ordered_vector {
    public:
        ordered_vector();
        ordered_vector(T data);
        ordered_vector(std::initializer_list<T> init);

        // Operators
        T operator[](T index) const
        { return index < container.size() ? container[index] : NULL; }

        // Functions
        std::vector<T> dump_data() const { return container; }
        void push(T data);
        std::vector<T> _sort(std::vector<T> vec) const;
        void _sort() { container = _sort(container); }
        std::size_t size() { return container.size(); }

        ~ordered_vector();

    private:
        std::vector<T> container;
};



/* Function definitions */

// Constructors
template <class T>
ordered_vector<T>::ordered_vector(std::initializer_list<T> init) : container(init) {
	if (!container.empty())
		_sort();
}

template <class T>
ordered_vector<T>::ordered_vector(T data) {
	container.push_back(data);
	if (!container.empty())
		_sort();
}

template <class T>
ordered_vector<T>::ordered_vector() {
	if (!container.empty())
		_sort();
}

// Functions
template <class T>
std::vector<T> ordered_vector<T>::_sort(std::vector<T> vec) const {
	std::sort(vec.begin(), vec.end());
	return vec;
}

template <class T>
void ordered_vector<T>::push(T data) {
	container.push_back(data);
	_sort();
}

template <class T>
ordered_vector<T>::~ordered_vector() {}
