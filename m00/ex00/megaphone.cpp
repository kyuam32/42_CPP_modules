#include <iostream>

std::string nk_toupper(const char *str)
{
	std::string ret;
	for (int i = 0; str[i]; i++)
		ret += std::toupper(str[i]);
	return ret;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			std::cout << nk_toupper(argv[i]);
		}
		std::cout << std::endl;
	}
}