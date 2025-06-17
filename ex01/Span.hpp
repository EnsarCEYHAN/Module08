#ifndef SPAN_HPP
# define SPAN_HPP

# define GREEN       "\033[32m"
# define CYAN        "\033[36m"
# define DARK_ORANGE "\033[38m"
# define RED         "\033[31m"
# define GRAY        "\033[90m"
# define YELLOW      "\033[33m"
# define RESET       "\033[0m"

# include <iostream>
# include <vector>


class Span
{
    private:

        unsigned int        max;
        std::vector<int>    data;

    public:

        Span(void);
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span(void);

        int     shortestSpan(void);
        int     longestSpan(void);
        void    addNumber(void);

        template <typename T>
        void    addNums(T begin, T end)
        {
            if (data.size() + std::distance(begin, end) > max)
                throw std::runtime_error("this size more than max element count \xE2\x9D\x97\xE2\x9D\x97");
            this->data.insert(this->data.end(), begin, end);
        }
};

#endif