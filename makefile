CXX = g++
CXXFLAGS = -std=c++11 -g -Wall
main: main.o filereader.o hashtable.o node.o
	$(CXX) $(CXXFLAGS) -o $@ $^
