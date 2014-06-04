//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std; 

int main(int argc, char* argv[]) {

    if (argc != 2) {
        cout << "Usage: \n ./a.out filename" 
            << endl; 
        return 1;
    }

    string filename = argv[1];
    ifstream in(filename.c_str());

    vector<string> v;
    string line;
    while(getline(in, line))
        v.push_back(line); // Add the line to the end
   
    string out; 
    for(int i = 0; i < v.size(); i++)
        out += v[i] + "\n";

    cout << out << endl;
} ///:~
