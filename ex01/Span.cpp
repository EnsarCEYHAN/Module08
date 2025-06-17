#include "Span.hpp"

Span::Span(void): max(0)
{
    std::cout << GREEN << "Constructor called" << RESET << std::endl;
}

Span::Span(unsigned int n): max(n)
{
    std::cout << GREEN << "Arguman constructor called" << RESET << std::endl;
}

Span::Span(Span const &copy)
{
    std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Span &Span::operator=(const Span &other)
{
    std::cout << GREEN << "Copy assigment constructor called" << RESET << std::endl;
    max = other.max;
	data = other.data;
	return (*this);
}

Span::~Span(void)
{
    std::cout << GREEN << "Destructor called" << RESET << std::endl;
}

int     shortestSpan(void);