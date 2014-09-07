int main() {

    int x = 5; 
    int y = 6;
    int *null = (int*) null; 

    // (1) Create uninitialised reference
    int &a;

    // (2) Change what reference refers to 
    int &b = x; 
    &b  = &y; 

    // (3) Create a null reference
    int &c = *null; 
    
    // a and b cause compile time errors
    // c causes segfault at runtime. 

    return 1; 
}
