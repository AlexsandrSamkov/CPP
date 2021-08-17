#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>



template<typename T> class Array {
public:
    Array(){
        _size = 1;
        _array = new T[_size];
    }

    Array(unsigned int size) : _size(size){
        _array = new T[_size];
    }

    Array(T const &array) {
        *this = array;
    }
     ~Array() {
        delete[] _array;
    }
   Array &operator=(T const &array) {
        if (_array != NULL)
            delete[] _array;
        _array = new T[_size];
        _size = getSize();
        for (unsigned int i = 0; i < _size;i++)
            _array[i] = array;
        return *this;
    }

    unsigned int getSize() const
    {
        return _size;
    }

    T &operator[](unsigned int index)
    {
        if (index > _size)
            throw std::exception();
        return (_array[index]);
    }
    T const& operator[](unsigned int index) const
    {
        if (index > _size)
            throw std::exception();
        else
            return _array[index];
    }
private:
    T*  _array;
    unsigned int _size;
};



#endif