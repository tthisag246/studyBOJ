#include <iostream>
using namespace std;

int main() {
    int h, m, t, th, tm;
    
    cin >> h >> m >> t;

    th = t / 60;
    tm = t % 60;

    if (m + tm >= 60)
    {
        m += tm - 60;

        if (h + th >= 23)
            h += th - 23;
        else
            h += th + 1;
    }
    else
    {
        m += tm;

        if (h + th >= 24)
            h += th - 24;
        else
            h += th ;
    }

    cout << h << " " << m;

    return 0;     
}