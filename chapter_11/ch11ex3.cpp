int main() {

    int x = 5; 
    int y = 6;
    int *null = (int*) null; 

    // Create uninitialised reference
    int &a;

    // Change what reference refers to 
    int &b = x; 
    &b  = &y; 

    // Create a null reference
    int &c = *null; 
    
    // a and b cause compile time errors
    // c causes segfault at runtime. 

    return 1; 
}
