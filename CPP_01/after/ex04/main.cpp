/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:29:47 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/08 19:29:48 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error : argument." << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream fin(filename.data());
	std::string	str;
	int	start = 0;
	int	index = 0;
	std::string	newline;

	if (fin.is_open())
	{
		std::ofstream fout(filename.append(".replace").data());
		if (!fout.is_open())
		{
			fin.close();
			std::cout << "Error : file open." << std::endl;
			return (1);
		}
		while (!fin.eof())
		{
			getline(fin, str);
			newline = str;
			start = 0;
			index = 0;
			while ((index = str.find(s1, start)) != -1)
			{
				newline.erase(index, s1.length());
				newline.insert(index, s2);
				start = index + s1.length();
			}
			fout << newline;
			if (fin.eof())
				break ;
			fout << std::endl;
		}
		fout.close();
		fin.close();
	}
	else
	{
		std::cout << "File " << filename << " dose not exist." << std::endl;
		return (1);
	}
	return (0);
}
