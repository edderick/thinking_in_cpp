#include <iostream> 

using namespace std;

class A {
    int x; 

    public: 
    A() : x(0) {}
    
    // Prefix ++
    A& operator++() {
        x++;
        return *this; 
    }
    
    // Postfix ++
    A operator++(int) {
        A tmp(*this);
        ++(*this);
        return tmp; 
    }

    int getVal() { return x; }
};

int main() {
    A a; 
    cout << (a++).getVal() << " " << a.getVal() << endl; 

    return 1; 
}
