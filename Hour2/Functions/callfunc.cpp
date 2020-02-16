#include <iostream>
//function Demonsrating a call to a function
//prints out a useful? message.
void DemonstrationFunction()
{
    std::cout << "In Demonstration Function\n";
}
/*function main - prints out a message, then
calls DemonstrationFunction, then prints out a second message*/
int main()
{
    std::cout << "In Main\n";
    DemonstrationFunction();
    std::cout << "Back in main\n";
    return 0;
}
