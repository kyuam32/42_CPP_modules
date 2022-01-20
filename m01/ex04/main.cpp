#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "--- Run like this ---" << std::endl;
		std::cout << "./Sed_is_for_losers ${file_name} ${string_to_find} ${string_to_replace}" << std::endl;
		exit(0);
	}

	const std::string original = argv[1];
	const std::string ori_str = argv[2];
	const std::string rep_str = argv[3];

	if (ori_str == "")
	{
		std::cout << "your input string looks weird" << std::endl;
		exit(0);
	}

	std::ifstream fin(original);
	if (fin.fail())
	{
		std::cerr << "파일을 열 수 없음" << std::endl;
		exit(1);
	}

	std::ofstream fout((original + ".replace"));
	if (fout.fail())
	{
		std::cerr << "파일을 만들 수 없음" << std::endl;
		exit(1);
	}

	while (!fin.eof())
	{
		std::string buff;
		std::size_t found;
		std::getline(fin, buff);
		if(!fin.eof())
			buff += "\n";
		while((found = buff.find(ori_str)) != std::string::npos)
		{
			buff.erase(found, ori_str.length());
			buff.insert(found, rep_str);
		}
		fout << buff;
	}

	fin.close();
	fout.close();
	return (0);
}