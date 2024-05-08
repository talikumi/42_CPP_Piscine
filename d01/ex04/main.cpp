#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>

std::string substitute(std::string data, const std::string target, const std::string replacement)
{
	size_t	target_length = target.length();
	size_t	replacement_length = replacement.length();
	size_t	pos_target = 0;

	pos_target = data.find(target);
	while (pos_target != std::string::npos)
	{
		data.erase(pos_target, target_length);
		data.insert(pos_target, replacement);
		pos_target = data.find(target, pos_target + replacement_length);
	}
	return (data);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of arguments" << std::endl <<
		"Usage:\t./replace <file_name> <target> <replacement>" << std::endl;
	}
	else
	{
		const std::string filename = argv[1];
		const std::string	target = argv[2];
		const std::string	replacement = argv[3];
		std::string			data;
		std::ifstream		input_file;
		std::ofstream		output_file;

		input_file.open(argv[1]);
		if (input_file.is_open() == true)
		{
			output_file.open(filename + ".replace", std::ios::out | std::ios::trunc ); //only works on macOS with the +, to make it work on Linux, comment out "filename +"
			if (output_file.is_open() == true)
			{
				while (std::getline(input_file, data))
				{
					data = substitute(data, target, replacement);
					output_file << data;
					if (input_file.peek() != EOF)
						output_file << std::endl;
				}
				output_file.close();
			}
			else
			{
				std::perror("Output File Error");
				input_file.close();
				return (EXIT_FAILURE);
			}
			input_file.close();
		}
		else
		{
			std::perror("Input File Error");
			std::cout << "Output File not created or truncated." << std::endl;
			return (EXIT_FAILURE);
		}
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
