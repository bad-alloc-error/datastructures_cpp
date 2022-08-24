#include "ArrayCapacityException.hpp"

namespace ArrayException{

    ArrayCapacityException::ArrayCapacityException(std::string message) : IException(){
        error_message = message;
    }

    void ArrayCapacityException::log_message(){
        std::cerr << "ArrayCapacityException -> " << error_message << std::endl;
    }
}
