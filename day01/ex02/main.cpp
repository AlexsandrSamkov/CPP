#include <iostream>
#include <string>
int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = NULL;
	std::string &stringREF = str;
	stringPTR = &str;
	std::cout << "this is address str: " << &str << std::endl;
	std::cout << "this is address REF: " << &stringREF << std::endl;
	std::cout << "this is address ptr: " << stringPTR << std::endl;
	std::cout << "this is value PTR: " << *stringPTR << std::endl;
	std::cout << "this is value REF: " << stringREF << std::endl;
}
