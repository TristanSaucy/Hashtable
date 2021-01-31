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
