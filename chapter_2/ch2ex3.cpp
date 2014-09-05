#include <fstream> 
#include <string> 
#include <iostream> 


int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cout << "Usage: \n ./a.out filename" 
            << std::endl; 
        return 1;
    }
    
    std::string filename = argv[1];
    std::ifstream in(filename.c_str());

    int count = 0;
    std::string word; 
    while (in >> word) {
         count++;
    }

    std::cout << "This file contains " << count 
        << " whitespace-separated words." << std::endl;

    return 0; 
}
