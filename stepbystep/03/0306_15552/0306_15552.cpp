#include <iostream>
using namespace std;

int main() {
    int t;

    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;     
}