#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, temp;
    cin >> n >> m;

    int basket[n];
    for (int a = 0; a < n; a++) {
        basket[a] = a+1;
    }

    for (int a = 0; a < m; a++) {
        cin >> i >> j;
        temp = basket[i-1];
        basket[i-1] = basket[j-1];
        basket[j-1] = temp;
    }

    for (int a = 0; a < n; a++) {
        cout << basket[a] << " ";
    }

    return 0;
}