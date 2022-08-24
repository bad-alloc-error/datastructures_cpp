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
        void find(unsigned int position);
        void display();
        unsigned int search(T);
        unsigned int lenght();
        unsigned int index_of(T);
        T get(unsigned int index);
        void set(T, unsigned int index);
        bool is_full();
        bool is_empty();
        unsigned int size_of();
        unsigned int capacity();
        friend std::istream& operator>>(std::istream& is, Array &a);
        friend std::ostream& operator<<(std::ostream& os, Array &a);
    };    
} 

#endif