#include "../includes/header.hpp"

int main(int argc, char **argv)
{
	size_t len;
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);
			for (size_t j = 0; j < len; j++)
				cout << (char)toupper(argv[i][j]);
		}
	}

}