#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define GREEN       "\033[32m"
# define CYAN        "\033[36m"
# define DARK_ORANGE "\033[38m"
# define RED         "\033[31m"
# define GRAY        "\033[90m"
# define YELLOW      "\033[33m"
# define RESET       "\033[0m"

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &conteiner, int value)    // bu ifade bir turdur degısken degıl !!
{
    typename T::iterator    it;
    it = std::find(conteiner.begin(), conteiner.end(), value); // ilk arguman = start, hangi elemandan baslanacak aramaya. ikinci arguman = end, hangi elemana kadar aranacak. Hangi eleman degerı aranacak.
    if (it == conteiner.end())
        throw std::runtime_error("Value is not found \xE2\x9D\x97\xE2\x9D\x97");
    return it;
}

#endif