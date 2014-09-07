#include <iostream> 

using namespace std; 

class Top {
    public: 
    Top() { cout << "Top Constructor \n"; }
    ~Top() { cout << "Top Destructor \n"; }
};

class Middle : public Top {
    public: 
    Middle() { cout << "Middle Constructor \n"; }
    ~Middle() { cout << "Middle Destructor \n"; }
};

class Bottom : public Middle {
    public: 
    Bottom() { cout << "Bottom Constructor \n"; }
    ~Bottom() { cout << "Bottom Destructor \n"; }
};


int main() {
    Bottom bottom; 

    return 0; 
}
