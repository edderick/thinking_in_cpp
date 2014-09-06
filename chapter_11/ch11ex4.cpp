template<typename T> 
T& f(T* t) {
    t++;
    return *t; 
}

int main() {

    int x = 5; 
    int &ref = f(&x);

    return 1; 
}
