#include <iostream>
using namespace std;

int main() {
    int n[31], m;

    for (int i = 0; i < 28; i++) {
        cin >> m;
        n[m] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (n[i] != 1) {
            cout << i << "\n";
        }
    }

    return 0;
}