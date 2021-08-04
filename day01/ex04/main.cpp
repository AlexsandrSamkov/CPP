#include <iostream>
#include <string>
#include <fstream>

int replace(std::string &s1, std::string &s2, std::string &path)
{
	std::ifstream readFile;
	std::ofstream writeFile;
	std::string buff;
	std::string tmp;
	readFile.open(path);
	size_t find;
	if (!readFile.is_open())
	{
		std::cerr << "Error: Open file" << std::endl;
		return (1);
	}
	path.append(".replace");
	writeFile.open(path, std::ios_base::trunc);
	if (!writeFile.is_open())
	{
		readFile.close();
		std::cerr << "Error: Open file" << std::endl;
		return (1);
	}
	while (!readFile.eof())
	{
		getline(readFile,buff);
		while (buff.find(s1) != std::string::npos)
		{
			find = buff.find(s1);
			tmp.append(buff.substr(0, find));
			tmp.append(s2);
			tmp.append(buff.substr(find + s1.length()));
			buff = tmp;
			tmp.clear();
		}
		writeFile << buff;
		if (!readFile.eof())
			writeFile << std::endl;
	}
	readFile.close();
	writeFile.close();
	return (0);
}

int main(int argc, char *argv[])
{
	std::string s1;
	std::string s2;
	std::string path;
	if (argc != 4)
    {
		std::cerr << "Error: Args" << std::endl;
        return (1);
    }
	s1 = argv[1];
	s2 = argv[2];
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: string empty" << std::endl;
		return (1);
	}
	path = argv[3];
	return (replace(s1,s2,path));
}
