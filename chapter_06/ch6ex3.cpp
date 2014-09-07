#include <iostream>

using namespace std;

class Simple {
    int x;
    public:
    Simple(int);
    ~Simple();
};

Simple::Simple(int i) {
    x = i; 
    cout << "Constructor has been called. x = " << x << ".\n";
}

Simple::~Simple() {
    cout << "Constructor has been called. x = " << x << ".\n";
}

int main() {
    Simple s(20); 
    return 0; 
}
