#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std; 

int main(int argc, char* argv[]) {

    if (argc != 2) {
        cout << "Usage: \n ./a.out filename.\n"; 
        return 1;
    }

    string filename = argv[1];
    ifstream in(filename.c_str());

    vector<string> v;
    string line;
    while(getline(in, line)) {
        v.push_back(line);
    }

    for(int i = (v.size() - 1); i >= 0; i--) {
        cout << i << ": " << v[i] << "\n";
    }

    return 0; 
}
