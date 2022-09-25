#ifndef CPP_PISCINE_SPAN_HPP
#define CPP_PISCINE_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Span {
private:
    unsigned int        N;
    std::vector<int>    data;
    Span();
public:
    Span(unsigned int n);
    ~Span();
    Span(const Span & copy);
    Span & operator= (const Span & copy);

    int & operator[] (unsigned int index);

    void addNumber(unsigned int num);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class	SpanException : public std::exception {
    private:
        std::string _msg;
    public:
        SpanException(std::string msg): _msg(msg){};
        virtual ~SpanException() throw (){};
        virtual const char* what() const throw(){ return (_msg.c_str());};
    };
};


#endif
