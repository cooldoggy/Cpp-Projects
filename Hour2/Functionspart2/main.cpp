#include <iostream>
int Add(int x, int y)
{
    return (x+y);
}
int main()
{
    std::cout << "I'm in main()!\n";
    std::cout << "\nCalling Add()\n";
    std::cout << "The value returned is: " << Add(3,4);
    std::cout << "\nBack in main().\n";
    std::cout << "\nExiting...\n\n";
    return 0;
}
