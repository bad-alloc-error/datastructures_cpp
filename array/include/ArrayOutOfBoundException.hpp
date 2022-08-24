#ifndef _ARRAYOUTOFBOUNDEXCEPTION_HPP_
#define _ARRAYOUTOFBOUNDEXCEPTION_HPP_

#include<iostream>
#include<string>
#include"IException.hpp"

namespace ArrayException{
    
    class ArrayOutOfBoundException : public IException{
        
        private:
            std::string error_message;
        public:
            ArrayOutOfBoundException(std::string message);
            ~ArrayOutOfBoundException() override = default;
            void log_message();
    };

}

#endif