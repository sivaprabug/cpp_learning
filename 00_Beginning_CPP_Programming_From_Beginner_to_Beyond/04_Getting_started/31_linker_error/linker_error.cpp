#include <iostream>
int main()
{
    extern int x;
    std::cout << "Hello World !!" << std::endl;
    std::cout << x;
    return 0;
}
