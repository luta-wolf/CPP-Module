#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error count parametrs" << std::endl;
        return (1);
    }

    std::string str(argv[1]);
    Convert a(str);
    a.converted();

    std::cout << std::endl;
    Convert b(a);
    b.converted();

    return (0);
}