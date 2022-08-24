
#include<string>

namespace ArrayException{

    class IException{

        protected:
            explicit IException(); 
            virtual ~IException() = default;
        public:
            virtual void log_message() = 0;        
    };
}
