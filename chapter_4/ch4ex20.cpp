#include <iostream> 

using namespace std;

struct empty {};

struct one_function_member {
    int f() {return 0;}
};

struct many_function_members {
    int f() {return 0;}
    int g() {return 0;}
    int h() {return 0;}
    int i() {return 0;}
};

struct one_data_member {
    int x; 
};

struct four_data_members {
    int x; int y; 
    int z; int a; 
};

struct eight_data_members {
    int x; int y; 
    int z; int a; 
    int b; int c; 
    int d; int e; 
};

struct function_and_data_member { 
    int x; 
    int f() {return 0;}
};

template <class T> 
void print_size(const char* msg, T &t) {
    cout << msg << ": "<< sizeof (t) << "\n";
};

int main() {

    empty e; 
    one_function_member ofm;
    many_function_members mfm;
    one_data_member odm; 
    four_data_members fdm;
    eight_data_members edm;
    function_and_data_member fadm;

    print_size("Empty", e); // Has non-zero size to allow addressing
    print_size("One function member", ofm);
    print_size("Many function members", mfm);
    print_size("One data member", odm);
    print_size("Four data members", fdm);
    print_size("Eight data members", edm);
    print_size("Function and data member", fadm);

    return 0; 
}
