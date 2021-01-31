/*******************************************
 * Student Name: Tristan Stevens
 * File Name: node.cpp
 * Project 1
 *
 *
 *
 * *****************************************/

#include "node.hpp"

Node::Node()
{
	next=nullptr;
}

Node::Node(Node* nodePointer)
{
this->next=nodePointer;
}

Node* Node::getNext()
{
return next;
}

void Node::setName(std::string name)
{
	this->name=name;
}

void Node::setPassword(std::string password)
{
	this->password=password;
}

std::string Node::getName()
{
	return name;
}

std::string Node::getPassword()
{
	return password;
}
