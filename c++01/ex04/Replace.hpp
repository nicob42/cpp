#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
	private:
		std::ifstream	input_file;
		std::ofstream	output_file;
		std::string		filename;
	public:
		Replace(void);
		bool	setName(std::string filename);
		bool	replace(std::string s1, std::string s2);
		~Replace(void);
};

#endif