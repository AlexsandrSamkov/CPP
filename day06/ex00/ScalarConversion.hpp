#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP
# include <string>
#include <iostream>

class ScalarConversion {
public:
    ScalarConversion();
    ScalarConversion(ScalarConversion &scalarConversion);
    ~ScalarConversion();
    ScalarConversion const &operator=(ScalarConversion const &scalarConversion);
    static void toFloat(std::string const &str);
    static void toInt(std::string const &str);
    static void toChar(std::string const &str);
    static void toDouble(std::string const &str);
    
};
#endif