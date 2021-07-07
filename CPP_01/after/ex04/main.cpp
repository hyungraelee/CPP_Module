#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream fin(filename.data());
	std::ofstream fout(filename.append(".replace").data());
	std::string	str;

	if (fin.is_open())
	{
		while (!fin.eof())
		{
			getline(fin, str);
			if (str == s1)
				fout << s2;
			else
				fout << str;
			if (fin.eof())
				break ;
			fout << std::endl;
		}
	}
	fin.close();
	fout.close();
	return (0);
}
