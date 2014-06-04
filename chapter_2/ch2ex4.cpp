#include <fstream> 
#include <string> 
#include <iostream> 


int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cout << "Usage: \n ./a.out filename word" 
            << std::endl; 
        return 1;
    }
    
    std::string filename = argv[1];
    std::string wordA = argv[2];
    std::ifstream in(filename.c_str());

    int count = 0;
    std::string wordB; 
    while (in >> wordB) {
        if (wordA == wordB) {
            count++;
        }
    }

    std::cout << "This file contains the word \"" << wordA << "\" " 
        << count << " times." << std::endl;

    return 0; 
}
