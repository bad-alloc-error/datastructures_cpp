#include<iostream>
#include"array.hpp"

namespace array_adt{

    Array::Array(size_t arr_capacity) : capacity_(arr_capacity){ 
        array = new size_t[capacity_];
        size = 0;
    }

    Array::~Array(){
        delete [] array;
    }

    bool Array::is_full(){
        return size == capacity_;
    }

    bool Array::is_empty(){
        return size == 0;
    }

    size_t Array::size_of(){
        return size;
    }

    size_t Array::capacity(){
        return capacity_;
    }

    std::istream& operator>> (std::istream& is, Array &a){
        is>>a.array[a.size++];
        return is;
    } 

    std::ostream& operator<< (std::ostream& os, Array &a){

        for(size_t i{0}; i < a.size; ++i){
            os << a.array[i] << " ";
        }

        std::cout << "\n";
        
        return os;
    }
}
