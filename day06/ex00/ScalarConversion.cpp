#include "ScalarConversion.hpp"
#include <limits>
#include <cmath>
#include <iomanip>
ScalarConversion::ScalarConversion() {}
ScalarConversion::~ScalarConversion() {}
ScalarConversion::ScalarConversion(ScalarConversion &scalarConversion) {
   *this = scalarConversion;
}

const ScalarConversion\
&ScalarConversion::operator=(const ScalarConversion &scalarConversion) {
    if (&scalarConversion == this)
        return *this;
    return *this;
}

void ScalarConversion::toFloat(const std::string &str) {
    float res;
    std:: cout << "float: ";
    try {
        std::cout << std::fixed <<  std::setprecision( 1 ) << (res = std::stof(str));
        if (res != std::numeric_limits<float>::infinity()
        && res != -std::numeric_limits<float>::infinity()
        && !std::isnan(res))
        {
            std::cout << "f";
        }
    }
    catch (std::exception & e) {
        std::cout << "impossible";
    }
    std::cout << std::endl;
}

void ScalarConversion::toDouble(const std::string &str) {
    double res;
    std:: cout << "doubel: ";
    try {
         std:: cout << (res = std::stod(str));
    }
    catch (std::exception & e) {
        std::cout << "impossible";
    }
    std::cout << std::endl;
}

void ScalarConversion::toChar(const std::string &str) {
    int res;
    std::cout << "char: ";
    if (str.length() > 3)
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    try {
        res = std::stoi(str);
        if (res > 127 || res < 0)
            std::cout << "impossible" << std::endl;
        else if (res < 32 || res > 126)
            std::cout << "Non displayable " << std::endl;
        else
            std::cout << static_cast<char>(res) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "impossible" << std::endl;
    }
}

void ScalarConversion::toInt(std::string const &str) {
    int res;
    std:: cout << "int: ";
    try {
            std:: cout << (res = std::stoi(str));
    }
    catch (std::exception & e) {
        std::cout << "impossible";
    }
    std::cout << std::endl;

}
