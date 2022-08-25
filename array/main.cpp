#include<iostream>
#include"array.hpp"
#include"ArrayCapacityException.hpp"

using array_adt::Array;

int main(){

    try{
        Array<int> a(5);
    }catch(ArrayCapacityException& e){
        e.log_message();
    }

}