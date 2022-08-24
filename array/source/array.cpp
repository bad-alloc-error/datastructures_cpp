#include<iostream>
#include"Array.hpp"
#include"ArrayCapacityException.hpp"
#include"ArrayOutOfBoundException.hpp"


namespace array_adt{
    
    template<class T>
    Array<T>::Array(unsigned int arr_capacity){ 
        
        if(arr_capacity < 1){
            throw ArrayException::ArrayCapacityException("ERRO: Capacidade de armazenamento negativa!\n");
        }

        capacity_ = arr_capacity;
        size = 0;
        array = new T[capacity_];
    }

    template<class T>
    Array<T>::~Array(){
        delete [] array;
    }

    template<class T>
    void Array<T>::insert(T element, unsigned int position){

        if(position < 1 or position > size + 1){
            throw ArrayException::ArrayOutOfBoundException("ERRO: Fora dos Limites!\n");
        }

        for(size_t i{0}; i >= position - 1; --i){
            array[i + 1] = array[i];
        }

        array[position - 1] = element;
        size++;
    }   

    template<class T>
    bool Array<T>::is_full(){
        return size == capacity_;
    }

    bool Array::is_empty(){
        return size == 0;
    }

    unsigned int Array::size_of(){
        return size;
    }

    unsigned int Array::capacity(){
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
