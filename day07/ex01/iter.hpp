#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
template<typename T>
void    iter(T *array, int size, void (*func)(T &))
{
    if (!array)
        return;
    for (int i = 0; i < size; i++)
        func(array[i]);
}

template<typename T>
void iterPrint(T &val)
{
    std::cout << val << std::endl;
}



#endif