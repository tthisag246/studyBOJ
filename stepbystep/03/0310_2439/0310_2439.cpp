#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cin >> n;

    while (true)
    {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        i++;

        if (i > n) break;
        
        cout << "\n";
    }

    return 0;     
}