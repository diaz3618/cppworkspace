#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

template <class T>
class ordered_vector : public std::vector<T> {
public:
    ordered_vector();
    ordered_vector(std::initializer_list<T> init) : ordered_vector(init) {};
    //void push(T data) { ordered_vector.push_back(data); }
    ~ordered_vector();
};
