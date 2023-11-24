#pragma once
#include <iostream>
#include <stdexcept>

template<typename T>
class Array{
    public:
        virtual ~Array(void);
        Array(void);
        Array(unsigned int n);
        Array(const Array & instance);
        Array operator=(const Array & instance);
        T& operator[](unsigned int pos)const;

        unsigned int size(void) const;
    private:
        T *_arr;
        size_t _size;
};

template<typename T>
std::ostream& operator<<(std::ostream &out, Array<T> const& data);

#include "Array.tpp"
