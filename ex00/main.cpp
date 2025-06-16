#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    try
    {
        int                 array[] = {10, 20, 30, 40, 50};
        std::list<int>      list(array, array + 5);
        std::vector<int>    vec(array, array + 5);

        std::list<int>::iterator    l_it;
        std::vector<int>::iterator  v_it;


        std::cout << std::endl;
        std::cout << GRAY << "                  :::::::::::::::::::::::::   ARRAY ELEMENTS   :::::::::::::::::::::::::" << RESET << std::endl;
        std::cout << std::endl;
        
        for (int i = 0; i < 5; i++)
            std::cout << GREEN << i + 1 << ". element of " << DARK_ORANGE << "<< array >>" << GREEN << " is = " << array[i] << RESET << std::endl;
        std::cout << std::endl;


        std::cout << GRAY << "                  :::::::::::::::::::::::::   LIST ELEMENTS   :::::::::::::::::::::::::" << RESET << std::endl;
        std::cout << std::endl;
        
        int i = 0;
        for (l_it = list.begin(); l_it != list.end(); l_it++)
        {
            std::cout << GREEN << i + 1 << ". element of " << DARK_ORANGE << "<< list >>" << GREEN << " is = " << *l_it << RESET << std::endl;
            i++;
        }

        std::cout << std::endl;
        l_it = easyfind(list, 10);
        std::cout << GREEN << *l_it << " is founded in " << DARK_ORANGE << "<< list >>" << RESET << std::endl;
        l_it = easyfind(list, 20);
        std::cout << GREEN << *l_it << " is founded in " << DARK_ORANGE << "<< list >>" << RESET << std::endl;
        l_it = easyfind(list, 30);
        std::cout << GREEN << *l_it << " is founded in " << DARK_ORANGE << "<< list >>" << RESET << std::endl;
        l_it = easyfind(list, 40);
        std::cout << GREEN << *l_it << " is founded in " << DARK_ORANGE << "<< list >>" << RESET << std::endl;
        l_it = easyfind(list, 50);
        std::cout << GREEN << *l_it << " is founded in " << DARK_ORANGE << "<< list >>" << RESET << std::endl;
        std::cout << std::endl;


        std::cout << GRAY << "                  :::::::::::::::::::::::::   VECTOR ELEMENTS   :::::::::::::::::::::::::" << RESET << std::endl;
        std::cout << std::endl;

        i = 0;
        for (v_it = vec.begin(); v_it != vec.end(); v_it++)
        {
            std::cout << GREEN << i + 1 << ". element of " << DARK_ORANGE << "<< vec >>" << GREEN << " is = " << *v_it << RESET << std::endl;
            i++;
        }

        std::cout << std::endl;
        v_it = easyfind(vec, 10);
        std::cout << GREEN << *v_it << " is founded in " << DARK_ORANGE << "<< vector >>" << RESET << std::endl;
        v_it = easyfind(vec, 20);
        std::cout << GREEN << *v_it << " is founded in " << DARK_ORANGE << "<< vector >>" << RESET << std::endl;
        v_it = easyfind(vec, 30);
        std::cout << GREEN << *v_it << " is founded in " << DARK_ORANGE << "<< vector >>" << RESET << std::endl;
        v_it = easyfind(vec, 40);
        std::cout << GREEN << *v_it << " is founded in " << DARK_ORANGE << "<< vector >>" << RESET << std::endl;
        v_it = easyfind(vec, 50);
        std::cout << GREEN << *v_it << " is founded in " << DARK_ORANGE << "<< vector >>" << RESET << std::endl;
        std::cout << std::endl;
    }

    catch (std::exception &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }


}