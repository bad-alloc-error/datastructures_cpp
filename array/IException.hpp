
#include<string>

namespace ArrayException{

    class IException{

        protected:
            explicit IException(); 
        public:
            virtual void log_message() = 0;        
    };
}
