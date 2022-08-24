#include<iostream>
#include"array.hpp"

using array_adt::Array;

int main(){

    Array a;


    for(size_t i{0}; i < a.capacity(); ++i){
        std::cin >> a;
    }

    std::cout << a;

}