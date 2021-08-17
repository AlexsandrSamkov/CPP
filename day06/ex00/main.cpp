#include "string"
#include "iostream"
#include "ScalarConversion.hpp"
int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error args" << std::endl;
        return 1;
    }
    std::string str = argv[1];
    if (str.empty()) {
        std::cout << "Error args" << std::endl;
        return 1;
    }
    ScalarConversion::toFloat(str);
    ScalarConversion::toInt(str);
    ScalarConversion::toDouble(str);
    ScalarConversion::toChar(str);
}