#include "ch3ex1.h"

#include <iostream>

using namespace std;

void func1() {
    cout << "void func1()" << endl;
}

char func2() {
    cout << "char func2()" << endl;
    return 'a';
}

int func3() {
    cout << "int func3()" << endl;
    return 0;
}

float func4() {
    cout << "float func4()" << endl;
    return 0.0;
}

void func5(char c) {
    cout << "void func5(char)" << endl;
}

void func6(int i) {
    cout << "void func6(int)" << endl;
}

void func7(float f) {
    cout << "void func7(float)" << endl;
}
