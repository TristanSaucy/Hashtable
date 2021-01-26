#include "filereader.hpp"
int main()
{
FileReader reader;
reader.fileInput("lastNames.txt");
reader.fileEncryptor("raw.txt");
return 0;
}
