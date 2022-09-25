#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{

}

Span::~Span()
{
}

Span::Span(const Span & copy)
{
    (*this) = copy;
}

Span & Span::operator=(const Span &copy)
{
    this->data = copy.data;
    this->N = copy.N;

    return (*this);
}

void Span::addNumber(unsigned int num)
{
    if (data.size() >= N)
        throw SpanException("The Array is full, can't put the number!");
    data.push_back(num);
}

int & Span::operator[] (unsigned int index)
{
    if (index >= N || index < 0)
        throw SpanException("Index array is out of range!");
    return (this->data[index]);
}


unsigned int Span::shortestSpan()
{
    if (data.size() == 0 || data.size() == 1)
        throw SpanException("Impossible");

    std::vector<int>::iterator it = data.begin();
    std::vector<int>::iterator it2;

    unsigned int min = abs(*it - *(it + 1));
    for (it = data.begin() ; it != data.end(); it++)
    {
        for (it2 = it + 1; it2 != data.end(); ++it2)
        {
            unsigned int k = abs(*it2 - *it);
            if (k < min)
                min = k;
        }
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (data.size() == 0 || data.size() == 1)
        throw SpanException("Impossible");
    std::vector<int>::iterator it;
    it = std::min_element(data.begin(), data.end());

    std::vector<int>::iterator it_max;
    it_max = std::max_element(data.begin(), data.end());

    return (*it_max - *it);
}
