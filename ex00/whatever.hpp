#ifndef WHATEVER_H
# define WHATEVER_H

#define GRAY        "\033[90m"
#define GREEN       "\033[32m"
#define RESET       "\033[0m"

#include <iostream>

class Awesome
{
public:
Awesome(void) : _n(0) {}
Awesome( int n ) : _n( n ) {}
Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
int get_n() const { return _n; }
private:
int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }


template <typename T> const
void    swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> const
T   min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T> const
T   max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

#endif