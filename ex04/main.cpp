#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << "\n";
		return 1;
	}

	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Unable to open input file.\n";
		return 1;
	}

	std::string outputFilename = std::string(argv[1]) + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile.is_open()) {
		std::cerr << "Error: Unable to create output file.\n";
		inputFile.close();
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	while (std::getline(inputFile, line)) {
		std::string tmp;
		size_t pos = 0;
		size_t found;
		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			tmp += line.substr(pos, found - pos);
			tmp += s2;
			pos = found + s1.length();
		}
		tmp += line.substr(pos);
		outputFile << tmp << '\n';
	}
	inputFile.close();
	outputFile.close();
	std::cout << "File copied and replaced successfully. Output file: " << outputFilename << std::endl;

	return 0;
}
