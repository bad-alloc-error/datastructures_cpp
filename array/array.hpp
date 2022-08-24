
#include<istream>
#include<ostream>

namespace array_adt
{
    class Array{

    private:
        size_t* array;
        size_t capacity_;
        size_t size;
    public:
        Array(size_t arr_capacity = 10);
        ~Array();
        bool is_full();
        bool is_empty();
        size_t size_of();
        size_t capacity();
        friend std::istream& operator>>(std::istream& is, Array &a);
        friend std::ostream& operator<<(std::ostream& os, Array &a);
    };    
} 

