#include <iostream>

int main()
{
    char* text = "Hello world!"; // Is error with /permissive- but is not with /permissive
    std::cout << text << std::endl;
    return 0;
}
