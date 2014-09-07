//No, the main does not change

class A {
    public:
    void f() {}; 
    void f(int x) {};
    void f(int x, int y) {}; 
    void f(int x, int y, int z) {}; 
    void f(int x, int y, int z, int a) {};
};

class B {
    public:
    void f(int x = 0, int y = 0, int z = 0, int a = 0) {};
};

int main() {

    // Although impementations are different, usage is the same

    A a; 
    a.f();
    a.f(1);
    a.f(1, 1);
    a.f(1, 1, 1);
    a.f(1, 1, 1, 1);


    B b; 
    b.f();
    b.f(1);
    b.f(1, 1);
    b.f(1, 1, 1);
    b.f(1, 1, 1, 1);

    return 0; 
}
