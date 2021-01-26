#ifndef FILEREADER_HPP
#define FILEREADER_HPP
#include <string>
#include <fstream>
#include <sstream>
class FileReader
{
	public:
		FileReader();
		void fileInput(std::string fileName);
		void fileEncryptor(std::string fileName);
	private:
		std::string passwordGenerator();
		std::string passwordEncryptor(std::string password);
};

#endif
