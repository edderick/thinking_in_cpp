#include <iostream> 

using namespace std; 

void f(char& c) {
    c++;
}

int main() {
    char c = 'a';

    cout << c << "\n";

    f(c); 

    cout << c << "\n";

    f(c); 

    cout << c << "\n";

    return 1; 
}
