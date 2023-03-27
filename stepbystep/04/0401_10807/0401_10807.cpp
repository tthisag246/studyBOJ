#include <iostream>
using namespace std;

int main() {
    int n, v, c = 0;

    cin >> n;

    int va[n];

    for (int i = 0; i < n; i++)
        cin >> va[i];
    
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (va[i] == v)
            c += 1;
    }

    cout << c;
}