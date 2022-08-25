#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include<istream>
#include<ostream>

namespace array_adt
{   
    template<class T>
    class Array{

    private:
        T* array;
        unsigned int capacity_;
        unsigned int size;
    public:
        Array(unsigned int arr_capacity = 10);
        ~Array();
        void insert(T element, unsigned int position);
        void delete_element(T& element, unsigned int position);
        bool find(T& element, unsigned int position);
        void display();
        unsigned int search(T);
        unsigned int index_of(T);
        unsigned int size_of();
        unsigned int capacity();
        T get(unsigned int index);
        void set(T, unsigned int index);
        bool is_full();
        bool is_empty();
        friend std::istream& operator>>(std::istream& is, Array<T> &a);
        friend std::ostream& operator<<(std::ostream& os, Array<T> &a);
    };    
} 

#endif