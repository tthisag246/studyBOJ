#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    string a, b;

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    x = stoi(a);
    y = stoi(b);

    if (x > y)
        cout << x;
    else
        cout << y;
    
    return 0;
}