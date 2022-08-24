#include<iostream>
#include<string>

namespace ArrayException{

    class ArrayCapacityException{

        private:
            std::string error_message;
        public:
            ArrayCapacityException(std::string message); 
            void log_message();
    };

}