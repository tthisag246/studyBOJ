#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int x, t = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] < 68)
            x = 2;
        else if (s[i] < 71)
            x = 3;
        else if (s[i] < 74)
            x = 4;
        else if (s[i] < 77)
            x = 5;
        else if (s[i] < 80)
            x = 6;
        else if (s[i] < 84)
            x = 7;
        else if (s[i] < 87)
            x = 8;
        else if (s[i] < 91)
            x = 9;
        t += x + 1;
    }

    cout << t;
    
    return 0;
}