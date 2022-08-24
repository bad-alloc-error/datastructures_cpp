#ifndef _ARRAYCAPACITYEXCEPTION_HPP_
#define _ARRAYCAPACITYEXCEPTION_HPP_

#include<iostream>
#include<string>
#include"IException.hpp"

namespace ArrayException{

    class ArrayCapacityException : public IException{

        private:
            std::string error_message;
        public:
            explicit ArrayCapacityException(std::string message); 
            void log_message();
    };

}

#endif