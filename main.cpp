/*******************************************
 * Student Name: Tristan Stevens
 * File Name: main.cpp
 * Project 1
 *
 *This is main file. This is used to create instantations of the classes in order to run the program
 *
 * *****************************************/

#include "filereader.hpp"
#include "hashtable.hpp"
int main()
{
FileReader reader;
reader.fileInput("lastNames.txt");
reader.fileEncryptor("raw.txt");
HashTable table;
table.HashInsertion();
table.passwordTester();
return 0;
}
