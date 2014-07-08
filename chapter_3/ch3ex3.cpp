#include <string> 
#include <iostream> 

using namespace std; 

int main() {

    while(true) {
        
        string s;
        cin >> s; 

        int cmd; 

        if (s == "exit") {
            break; 
        } else if (s == "one") {
            cmd = 1; 
        } else if (s == "two") {
            cmd = 2; 
        } else if (s == "three") {
            cmd = 3; 
        } else if (s == "four") {
            cmd = 4; 
        } else if (s == "five") {
            cmd = 5; 
        } else if (s == "six") {
            cmd = 6; 
        } else if (s == "seven") {
            cmd = 7; 
        } else if (s == "eight") {
            cmd = 8; 
        } else if (s == "nine") {
            cmd = 9; 
        } 

        switch (cmd) {
            case 1: 
                cout << "uno" << endl;
                break;
            case 2: 
                cout << "dos" << endl;
                break;
            case 3: 
                cout << "tres" << endl;
                break;
            case 4: 
                cout << "cuatro" << endl;
                break;
            case 5: 
                cout << "cinco" << endl;
                break;
            case 6: 
                cout << "seis" << endl;
                break;
            case 7: 
                cout << "siete" << endl;
                break;
            case 8: 
                cout << "ocho" << endl;
                break;
            case 9: 
                cout << "nueve" << endl;
                break;
        }
    
    }

}
