#include <iostream>

using namespace std;

int main() {
    const int limit = 100; 

    bool number[limit];

    for (int i = 0; i < limit; i++) {
        number[i] = true;
    }

    number[0] = false; number[1] = false;

    for (int i = 2; i < limit; i++) {
        if (number[i]) {
            for (int j = 2; j*i < limit; j++) {
                    number[i*j] = false; 
                }
            }
    }

    for (int i = 0; i < limit; i++) {
        if (number[i]) { 
            cout << i << "  ";
        }
    }
}
