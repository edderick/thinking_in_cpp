#include <iostream>
#include <vector>
#include <math.h>

using namespace std; 

int main(int argc, char* argv[]) {

    vector<float> x; 
    vector<float> y; 
    for (unsigned int i = 0; i < 25; i++) {
        x.push_back(i / 7.0); 
        y.push_back(i / 6.0); 
    }

    vector<float> z; 
    for (unsigned int i = 0; i < min(x.size(), y.size()); i++) {
           z.push_back(x[i] + y[i]);
    }

    for (unsigned int i = 0; i < z.size(); i++) {
        cout << x[i] << " + " << y[i] << " = " << z[i] << "\n";
    }

    return 0; 
}
