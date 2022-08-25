#include<iostream>
#include"../include/Array.hpp"
#include"../include/Exceptions.hpp"


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

        for(unsigned int i{size - 1}; i >= position - 1; --i){
            array[i + 1] = array[i];
        }

        /*indice começa por 0 e posição começa por 1, então position -1 é o indice correto*/
        array[position - 1] = element;
        size++;
    }   

    template<class T>
    void Array<T>::delete_element(T& element, unsigned int position){

        if(position < 1 or position > size){
            throw ArrayException::ArrayOutOfBoundException("ERRO: Fora dos Limites!\n");
        }

        element = array[position - 1];

        for(unsigned int i{position}; i < size; ++i){
            array[i - 1] = array[i];
        }

        size--;

    }

    template<class T>
    bool Array<T>::is_full(){
        return size == capacity_;
    }

    template<class T>
    T Array<T>::get(unsigned int index){

        if(index < 0 or index > size -1){
            throw ArrayException::ArrayOutOfBoundException("ERRO: Fora dos limites!\n");
        }

        return array[index];

    }

    template<class T>
    void Array<T>::set(T element, unsigned int index){
        
        if(index < 1 or index >= size){
            throw ArrayException::ArrayOutOfBoundException("ERRO: Fora dos Limites!\n");
        }

        array[index] = element;
    }

    template<class T>
    void Array<T>::display(){
        for(unsigned int i{0}; i < size; ++i){
            std::cout << array[i] << " ";
        }

        std::cout << "\n";
    }

    template<class T>
    bool Array<T>::find(T& element, unsigned int position){
        if(position < 1 or position > size){
            throw ArrayException::ArrayOutOfBoundException("ERRO: Fora dos limites!\n");
        }
        
        if(element == array[position - 1]){ return true; }
    }

    template<class T>
    unsigned int Array<T>::search(T element){
        /*busca linear*/
        for(unsigned int i{0}; i < size; ++i){
            if(element == array[i]){ return i + 1; }
        }
        /*caso não encontre o valor*/
        return -1;
    }

    template<class T>
    bool Array<T>::is_empty(){
        return size == 0;
    }

    template<class T>
    unsigned int Array<T>::size_of(){
        return size;
    }

    template<class T>
    unsigned int Array<T>::capacity(){
        return capacity_;
    }

    template<class T>
    std::istream& operator>> (std::istream& is, Array<T> &a){
        is>>a.array[a.size++];
        return is;
    } 

    template<class T>
    std::ostream& operator<< (std::ostream& os, Array<T> &a){

        for(unsigned int i{0}; i < a.size; ++i){
            os << a.array[i] << " ";
        }

        std::cout << "\n";
        
        return os;
    }
}
