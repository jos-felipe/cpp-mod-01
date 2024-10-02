/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:09:07 by josfelip          #+#    #+#             */
/*   Updated: 2024/10/02 15:53:33 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty() || s2.empty())
		{
			std::cerr << "Error. Strings cannot be empty" << std::endl;
			return 1;
		}
	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open()) {
		std::cerr << "Error opening input file: " << filename << std::endl;
		return 2;
	}
	
	std::string outputFilename = filename + ".replace";
	std::ofstream outFile(outputFilename.c_str());
	if (!outFile.is_open()) {
		std::cerr << "Error creating output file: " << outputFilename << std::endl;
		return 3;
	}
	
	std::string line;
	while (std::getline(inFile, line)) {
		std::size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line << std::endl;
	}
	
	inFile.close();
	outFile.close();
	
	std::cout << "Replacement completed successfully." << std::endl;
	return 0;
}