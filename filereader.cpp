/*******************************************
 * Student Name: Tristan Stevens
 * File Name: filereader.cpp
 * Project 1
 *
 *
 *
 * *****************************************/

#include "filereader.hpp"
FileReader::FileReader()
{

}

void FileReader::fileInput(std::string fileName)
{
	std::ifstream input;
	std::ofstream output;
	input.open(fileName);
	output.open("raw.txt");
	std::string name;
	std::string trash;
	input>>name;
	while(!input.eof())
	{
		output << name << " " << passwordGenerator() << std::endl;
		getline(input,trash);
		input>>name;
	}
	input.close();
	output.close();

	
}

void FileReader::fileEncryptor(std::string fileName)
{
	std::ifstream input;
	std::ofstream output;
	input.open(fileName);
	output.open("encrypted.txt");
	std::string name;
	std::string password;
	input>>name>>password;
	while(!input.eof())
	{
		output << name << " " << passwordEncryptor(password) << std::endl;
		input>>name>>password;
	}
	input.close();
	output.close();
}

std::string FileReader::passwordEncryptor(std::string password)
{
	std::string codeword = "jones";
	int cipherLength= codeword.length();
	int passwordLength=password.length();
	int cipherCounter=0;
	int codeNumber;
	int codeOffset;
	while(passwordLength>cipherCounter)
	{
		for(int i = 0; i<cipherLength; i++)
		{
			codeNumber = codeword.at(i);
			codeOffset = codeNumber-97;
			if((password.at(cipherCounter)+codeOffset)>122)
			{
				password.at(cipherCounter)+=(codeOffset-26);
				cipherCounter++;
			}
			else
			{
				password.at(cipherCounter)+=codeOffset;
				cipherCounter++;
			}
			if(passwordLength<=cipherCounter)
			{
				break;
			}
		}
	}
	return password;
}

std::string FileReader::passwordGenerator()
{
	std::stringstream password;
	int a;
	char c;
	for(int i = 0; i<9; i++)
	{
		a = (rand() % 26) +97;
		c = (char)a;
		password << c;
	}
	return password.str();
}
