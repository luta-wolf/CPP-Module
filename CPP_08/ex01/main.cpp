#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
//        sp.addNumber(12); // 6e
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        for (int i = 0; i < 5; ++i) // печатаем числа, которые занесли в массив
            std::cout << sp[i] << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    std::cout <<std::endl;
    std::cout << "Short Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp.longestSpan() << std::endl;

    Span sp2 = Span(10000);

    for (int i = 0; i < 10000; i++)
        sp2.addNumber(i + 1);

    std::cout << "Short Span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Long Span: " << sp2.longestSpan() << std::endl;

    Span sp3 = Span(1); // если 1 или 0 элементов то ошибка
    try {
        std::cout << "Short Span: " << sp3.shortestSpan() << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return (0);
}
