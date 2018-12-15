#include "ordered_vector.h"

template <class T>
T ordered_vector<T>::operator[](T index) const
{ return index < container.size() ? container[index] : NULL; }

template <class T>
std::vector<T> ordered_vector<T>::_sort(std::vector<T> vec) const {
	std::sort(vec.begin(), vec.end());
	return vec;
}

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

template <class T>
void ordered_vector<T>::push(T data) {
	container.push_back(data);
	_sort();
}

template <class T>
ordered_vector<T>::~ordered_vector() {
}