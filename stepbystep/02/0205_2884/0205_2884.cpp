#include <iostream>
using namespace std;

int main() {
    int h, m;
    
    cin >> h >> m;

    if (m < 45)
    {
        m += 15;

        if (h == 0)
            h = 23;
        else
            h -= 1;
    }
    else
    {
        m -= 45;
    }

    cout << h << " " << m;

    return 0;     
}