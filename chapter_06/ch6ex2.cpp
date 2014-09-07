#include <iostream>

using namespace std;

class Simple {
    public:
    Simple();
    ~Simple();
};

Simple::Simple() {
    cout << "Constructor has been called \n";
}

Simple::~Simple() {
    cout << "Destructor has been called \n";
}

int main() {
    Simple s; 
    return 0; 
}
