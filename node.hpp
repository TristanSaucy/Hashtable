/*******************************************
 * Student Name: Tristan Stevens
 * File Name: node.hpp
 * Project 1
 *
 *This class is used to create nodes for use in the linked lists contained in the hashtable
 *
 * *****************************************/

#ifndef NODE_HPP
#define NODE_HPP
#include <string>
class Node
{
	public:
		Node();
		Node(Node* nodePointer);
		void setName(std::string name);
		void setPassword(std::string password);
		std::string getPassword();
		std::string getName();
		Node* getNext();
	private:
		std::string name;
		std::string password;
		Node* next;
};
#endif
