#include<iostream>
#include<string>
#include"ArrayOutOfBoundException.hpp"

namespace ArrayException{

    ArrayOutOfBoundException::ArrayOutOfBoundException(std::string message) : IException(){
        error_message = message;
    }

    void ArrayOutOfBoundException::log_message(){
        std::cerr << "ArrayOutOfBoundException -> " << error_message << std::endl;
    }

}