// Attendance Sheet Program - Basil Ahmed

#include <iostream>
#include <sstream>  
using namespace std;

int main() {
    string students[5];
    string absence[5];
    cout << "Enter Students Name" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> students[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << "Is the student " << students[i] << " absent? "; 
        cin >> absence[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << students[i] << " " << absence[i] << endl;
    }
    return 0;
}