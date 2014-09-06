#include <string> 

using namespace std;

class Traveler {
    string s; 
    public: 
    Traveler(string ss) : s(ss) {}
    Traveler(const Traveler& other) {
        s = other.s; 
    }
    Traveler& operator= (const Traveler& other) {
        if (&other == this) return *this; 
        s = other.s; 
        return *this; 
    }
};

class Pager {
    string s; 
    public: 
    Pager(string ss) : s(ss) {}
    Pager(const Pager& other) {
        s = other.s; 
    }
    Pager& operator= (const Pager& other) {
        if (&other == this) return *this; 
        s = other.s; 
        return *this; 
    }
};

class BusinessTraveler {
    Pager p; 
    string s; 
    public: 
    BusinessTraveler(string ss) : p(ss), s(ss) {}
    BusinessTraveler(const BusinessTraveler& other) : p(other.s) {
        s = other.s;
    }
    BusinessTraveler& operator= (const BusinessTraveler& other) {
        if (&other == this) return *this; 
        s = other.s; 
        return *this; 
    }
};

int main() {
    
    BusinessTraveler bt("Hello");

    return 1; 
}

