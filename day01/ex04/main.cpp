#include <iostream>
#include <fstream>
#include <string>

bool	parsing( int ac, char **av )
{
    if (!av[2][0] || !av[3][0])
    {
		std::cout << "Empty string !\n";
		return false;
	}
	if (ac != 4) 
    {
		std::cout << "Wrong number of argument !\n";
		return false;
	}
	return true;
}

std::string	outfileName(std::string str)
{

	std::string newStr(str);

	for (int i = 0; newStr[i]; i++)
		newStr[i] -= ((newStr[i] >= 'a' && newStr[i] <= 'z') ? 32 : 0);
	newStr += ".replace";
	return newStr;
}

void	replace(std::ifstream& file, std::ofstream& out, const std::string& s1, const std::string& s2)
{

	std::string	newStr;
	size_t		i;

	while (std::getline(file, newStr))
    {
		i = 0;
		while ((i = newStr.find(s1, i)) != std::string::npos) //find will return size_t len max at the end if it doesnt find any more occurence
        {
			newStr.erase(i, s1.size());
			newStr.insert(i, s2);
			i += s2.size();
		}
		out << newStr << "\n";
	}
}

int main( int ac, char **av )
{

	if (!parsing(ac, av))
		return 0;
	std::ifstream	file(av[1]); //class to read from files
	if (!file.is_open()) //check if the stream is currently associated to a file
    {
		std::cout << "Fail to open input file\n";
		return 0;
	}
	std::ofstream	out(outfileName(av[1])); //class to write on files
	if (!out.is_open())
    {
		std::cout << "Fail to open output file\n";
		return 0;
	}
	replace(file, out, av[2], av[3]);
	file.close();
	out.close();

	return 0;
}