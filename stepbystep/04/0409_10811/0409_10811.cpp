#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, temp;
    cin >> n >> m;
    
    int basket[n];
    for (int a = 0; a < n; a++)
    {
        basket[a] = a + 1;
    }

    for (int a = 0; a < m; a++)
    {
        cin >> i >> j;
        for (int a = 0; a < (j - i + 1) / 2; a++)
        {
            temp = basket[i-1+a];
            basket[i-1+a] = basket[j-1-a];
            basket[j-1-a] = temp;
        }
    }

    for (int a = 0; a < n; a++)
    {
        cout << basket[a] << " ";
    }
}