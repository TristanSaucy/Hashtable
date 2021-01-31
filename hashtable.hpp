/*******************************************
 * Student Name: Tristan Stevens
 * File Name: hashtable.hpp
 * Project 1
 *
 * this class is used to create the hashtable
 *
 * *****************************************/

#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP
#include "node.hpp"
#include "filereader.hpp"
#include <fstream>
#include <iostream>
class HashTable
{
	public:
		HashTable();
		void HashInsertion();
		void passwordTester();
	private:
		Node** headPointers;	
};
#endif
