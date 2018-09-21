#include <iostream>;


namespace plus
{
    int x =10;
}

namespace math
{
    int x = plus::x;
    
}
    
int main()
{
        
        std::cout << " x = " << math::x << std::endl;
        
        
        
        return 0;
}

