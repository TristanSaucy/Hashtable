/*******************************************
 * Student Name: Tristan Stevens
 * File Name:filereader.hpp
 * Project 1
 *
 *This class is used to read the files to generate new files
 *
 * *****************************************/

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
		static std::string passwordEncryptor(std::string password);
	private:
		std::string passwordGenerator();
};

#endif
