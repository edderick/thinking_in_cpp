//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std; 

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cout << "Usage: \n ./a.out filename" 
            << std::endl; 
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream in(filename.c_str());

    vector<string> v;
    string line;
    while(getline(in, line))
        v.push_back(line); // Add the line to the end
    // Add line numbers:
    for(int i = 0; i < v.size(); i++) {
        cout << i << ": " << v[i];
        cin.ignore();
    }
} ///:~
