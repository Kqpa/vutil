/**
 * @file    vutil.hpp
 * @author  Kqpa <kqpa@pm.me>
 * @brief   Utility header to make it easier to work with Vectors
**/

#ifndef VUITL_HPP
#define VUTIL_HPP

#include <vector>
#include <iostream>
#include <iomanip>

namespace vutil {

    template <typename T>
    void print_vector(std::vector<T>);

    template <typename T>
    void print_2d_vector(std::vector<std::vector<T>>);

    template <typename T>
    int calculate_2d_vector_size(std::vector<std::vector<T>>);

}

template <typename T>
void vutil::print_vector(std::vector<T> vec) {
    for (size_t i = 0; i < 1; ++i) {
        std::cout << "(" << i << ") |";
        for (size_t j = 0; j < vec.size(); ++j) {
            if ((j + 1) == vec.size()) {
                std::cout << std::setw(4) << vec.at(j) << "\n";
            } else {
                std::cout << std::setw(4) << vec.at(j);
            }
        }
    }
}

template <typename T>
void vutil::print_2d_vector(std::vector<std::vector<T>> vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << "(" << i << ") |";
        for (size_t j = 0; j < vec.at(i).size(); ++j) {
            std::cout << std::setw(4) << vec.at(i).at(j);
        }
        std::cout << "\n";
    }
}

template <typename T>
int vutil::calculate_2d_vector_size(std::vector<std::vector<T>> vec) {
    int size = 0;
    for (size_t i = 0; i < vec.size(); i++)  {
        size += vec.at(i).size();
    }
    return size;
}

#endif /* VUTIL_HPP */