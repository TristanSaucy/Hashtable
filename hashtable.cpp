#include "hashtable.hpp"

HashTable::HashTable()
{
	headPointers=new Node*[88001];
}

void HashTable::HashInsertion()
{
	std::ifstream input;
	input.open("encrypted.txt");
	std::string name;
	std::string password;
	input>>name>>password;
	int nameLength;
	int nameValue=0;
	int hashPosition;
	while(!input.eof())
	{
		nameValue=0;
		nameLength=name.length();
		for(int i=0;i<nameLength;i++)
		{
			nameValue+=name.at(i);
		}
		hashPosition=nameValue%88001;
		if(headPointers[hashPosition]==nullptr)
		{
			headPointers[hashPosition]=new Node;
			headPointers[hashPosition]->setName(name);
			headPointers[hashPosition]->setPassword(password);
		}
		else
		{
			headPointers[hashPosition]=new Node(headPointers[hashPosition]); // I think this works, go back and check
		}
		input>>name>>password;

	}
	input.close();
}

void HashTable::passwordTester()
{
	std::ifstream rawInput;
	rawInput.open("raw.txt");
	std::string rawName;
	std::string rawPassword;
	int nameLength;
	int nameValue=0;
	int hashPosition;
	Node* currentNode;
	std::cout << "Legal" << std::endl;
	for(int i = 0; i<5; i++)
	{
		rawInput>>rawName>>rawPassword;
		std::cout << rawName <<" " <<rawPassword << " ";
		nameValue=0;
		nameLength=rawName.length();
		for(int j=0; j<nameLength;j++)
		{
			nameValue+=rawName.at(j);
		}
		hashPosition=nameValue%88001;
		currentNode=headPointers[hashPosition];
		while(1)
		{
			if(currentNode->getName()!=rawName)
			{
				currentNode=currentNode->getNext();
			}
			else
			{
				if(currentNode->getPassword()==FileReader::passwordEncryptor(rawPassword))
				{
					std::cout <<"match"<<std::endl;
				}
				else
				{
					std::cout << "no match"<<std::endl;
				}
				break;
			}
		}

	}
	rawInput.close();
	rawInput.open("raw.txt");
	std::cout <<"Illegal" << std::endl;
	for(int i = 0; i<5; i++)
	{
		rawInput>>rawName>>rawPassword;
		if(rawPassword.at(0)!='x')
		{
			rawPassword.at(0)='x';
		}
		else rawPassword.at(0)='q';
		std::cout << rawName <<" " <<rawPassword << " ";
		nameValue=0;
		nameLength=rawName.length();
		for(int j=0; j<nameLength;j++)
		{
			nameValue+=rawName.at(j);
		}
		hashPosition=nameValue%88001;
		currentNode=headPointers[hashPosition];
		while(1)
		{
			if(currentNode->getName()!=rawName)
			{
				currentNode=currentNode->getNext();
			}
			else
			{
				if(currentNode->getPassword()==FileReader::passwordEncryptor(rawPassword))
				{
					std::cout <<"match"<<std::endl;
				}
				else
				{
					std::cout << "no match"<<std::endl;
				}
				break;
			}
		}

	}




}








