#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		if (s1.size() <= 0)
		{
			std::cout << "Error : String to replace must not be empty." << std::endl;
			return (1);
		}
		std::string s2 = av[3];

		std::fstream infile, outfile;
		std::string output = filename + ".replace";
		std::string f1, line;
		infile.open(filename.c_str(), std::ios::in);
		if (!infile)
		{
			std::cout << "Error opening file" << std::endl;
			return (1);
		}
		while (std::getline(infile, line))
			f1 += line + '\n';
		if (f1.size() <= 0)
		{
			std::cout << "Error no content in file" << std::endl;
			return (0);
		}
		size_t pos = f1.find(s1);
		while (pos != std::string::npos)
		{
			f1.erase(pos, s1.length());
			f1.insert(pos, s2);
			pos = f1.find(s1, pos + s2.length());
		}
		outfile.open(output.c_str(), std::ios::out);
		outfile << f1;
		return (0);
	}
}