#include <fstream> 
#include <string> 
#include <iostream> 

using namespace std;

int main(int argc, char* argv[]) {

    if (argc != 2) {
        cout << "Usage: \n ./a.out filename \n"; 
        return 1;
    }
    
    string filename = argv[1];
    ifstream in(filename.c_str());

    int count = 0;
    string word; 
    while (in >> word) {
         count++;
    }

    cout << "This file contains " << count << " whitespace-separated words. \n";

    return 0; 
}
