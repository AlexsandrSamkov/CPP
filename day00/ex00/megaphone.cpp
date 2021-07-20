#include "header.hpp"

int main(int argc, char **argv)
{
	size_t len;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			len = std::strlen(argv[i]);
			for (size_t j = 0; j < len; j++)
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
	}

}