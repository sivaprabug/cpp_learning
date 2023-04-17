#include <iostream>
int main()
{
    int age = 18;
    age = 20;
    if (age > 18)
    {
        std::cout << "Yes you ca vote !!" << std::endl;
    }
    if (age < 18)
    {
        std::cout << "Yes you can't vote !!" << std::endl;
    }
    return 0;
}
