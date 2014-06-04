#include <iostream>
#include <vector>
using namespace std; 

int main(int argc, char* argv[]) {

    vector<float> v; 
    for (unsigned int i = 0; i < 25; i++) {
        v.push_back(i / 7.0); 
    }

    for (float f : v) {
        cout << f << "\n";
    }

    return 0; 
}
