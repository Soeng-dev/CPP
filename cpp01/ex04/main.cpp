
#include <iostream>
#include <fstream>
#include <iomanip>

void replace(std::string &line, std::string toReplace, std::string replaceWith);

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Wrong input" << std::endl;
		return (-1);
	}

	std::ifstream inFS(argv[1]);
	if (!inFS.is_open())
	{
		std::cout << "Coulnd't open the input file" << std::endl;
		return (-1);
	}
	std::string outName = (std::string)argv[1] + ".replace";
	std::ofstream outFS(outName.c_str());
	if (!outFS.is_open())
	{
		std::cout << "Coulnd't open the output file" << std::endl;
		return (-1);
	}

	std::string buffer;
	std::string toReplace = argv[2],
				replaceWith = argv[3];

	while (getline(inFS, buffer) && !std::cin.eof())
	{
		replace(buffer, toReplace, replaceWith);
		outFS << buffer << std::endl;
	}

	outFS.close();
	inFS.close();
}

void replace(std::string &buf, std::string toReplace, std::string replaceWith)
{
	size_t start = 0;

	while ((start = buf.find(toReplace, start)) != std::string::npos)
	{
		buf.erase(start, toReplace.length());
		buf.insert(start, replaceWith);
		start += replaceWith.length();
	}
}