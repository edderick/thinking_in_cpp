#include <iostream> 

using namespace std; 

void print_ptr(void* ptr) { 
    cout << ptr << "\n";
}

int main() { 

    int *i = new int; 
    long *l = new long; 
    char *c = new char[100]; 
    float *f = new float[100];

    print_ptr(i);
    print_ptr(l);
    print_ptr(c);
    print_ptr(f);

    delete i; 
    delete l;
    delete[] c;
    delete[] f; 

    return 0; 
}
