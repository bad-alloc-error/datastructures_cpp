#include "array_exceptions.hpp"
namespace ArrayException{

    ArrayCapacityException::ArrayCapacityException(std::string message){
        error_message = message;
    }

    void ArrayCapacityException::log_message(){
        std::cerr << error_message << std::endl;
    }

}
