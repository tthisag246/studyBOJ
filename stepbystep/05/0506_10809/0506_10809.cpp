#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int f;

    for (int i = 0; i < 26; i++)
    {
        f = s.find('a'+i);
        if (f == string::npos)
            f = -1;
        cout << f << " ";
    }
    return 0;
}