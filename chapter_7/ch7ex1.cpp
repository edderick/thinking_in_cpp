#include <iostream> 
#include <fstream> 
#include <sstream>
#include <string>

using namespace std;

class Text {
    string data; 
    public: 
    Text() {}; 
    Text(string filename); 
    string contents(); 
};

Text::Text(string filename) {
    ifstream in(filename);
    stringstream strStream;
    strStream << in.rdbuf();
    data = strStream.str();
}

string Text::contents() {
    return data; 
}

int main() {
    Text t("ch7ex1.cpp"); 
    cout << t.contents();
    return 0; 
}
