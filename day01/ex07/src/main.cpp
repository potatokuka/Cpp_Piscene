#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int		main(int ac, char **av){
	if (ac < 4 || ac > 4)
	{
		std::cerr << "Error: input required './replace [TAR_FILE] [str1] [str2]'"
			<< std::endl;
		return (1);
	}
	std::string tar_file = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];
	std::ifstream fs(tar_file);
	// protect the open
	if (!fs.good())
	{
		std::cerr << "Error: File -" << tar_file << "- could not be opened"
			<< std::endl;
		return (1);
	}
	// protect input against empty input
	if (str1.empty())
	{
		std::cerr << "Error: Please provide input for str1" << std::endl;
		return (1);
	}
	if (str2.empty())
	{
		std::cerr << "Error: Please provide input for str2" << std::endl;
		return (1);
	}
	std::stringstream	buff;
	std::string			content;
	buff << fs.rdbuf();
	content = buff.str();

	// Yeet and Yeet
	size_t				match;
	while ((match = content.find(str1)) != std::string::npos)
	{
		content.replace(match, str1.length(), str2);
	}
	std::ofstream of(tar_file + ".replace");
	// protect output file
	if (!of.good())
	{
		std::cerr << "Error: could not access -" << tar_file << ".replace"
			<< std::endl;
		return (1);
	}
	of << content;
	of.close();
	return (0);
}
