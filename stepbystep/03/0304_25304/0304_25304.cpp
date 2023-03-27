#include <iostream>
using namespace std;

int main() {
    int x, n, t = 0;
    
    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        t += a * b;
    }
        
    if (x == t)
        cout << "Yes";
    else
        cout << "No";

    return 0;     
}