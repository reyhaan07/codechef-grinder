#include <iostream>
#include <string>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    // Read the single string input directly
    if (cin >> s) {
        // Compare the input string with the required access code
        if (s == "WECNITK") {
            cout << "Welcome to Web Club!" << endl;
        } else {
            cout << "Access denied" << endl;
        }
    }
    
    return 0;
}