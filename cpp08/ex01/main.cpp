#include "span.hpp"

int main (void){

    span a(10000);

    for (int i = 0; i < 10000; i++)
        a.addNumber(i);

    std::cout << a.shortestSpan() << " is the shortest span" << std::endl;
    std::cout << '\n';
    std::cout << a.longestSpan() << " is the longest span" << std::endl;

    span b(10);
        b.addNumber(12);
        b.addNumber(100);
        b.addNumber(10000);
        b.addNumber(1666);
        b.addNumber(1);
        b.addNumber(55421);
        b.addNumber(1254);
        b.addNumber(4462);
        b.addNumber(21);
        b.addNumber(35165);


    std::cout << b.shortestSpan() << " is the shortest span" << std::endl;
    std::cout << '\n';
    std::cout << b.longestSpan() << " is the longest span" << std::endl;
    try
    {
        b.addNumber(156231);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}