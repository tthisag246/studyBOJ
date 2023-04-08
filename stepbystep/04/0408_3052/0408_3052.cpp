#include <iostream>
#include <set>
using namespace std;

int main() {
    int n[10];
    for (int i = 0; i < 10; i++) {
        cin >> n[i];
    }

    set<int> s;

    for (int i = 0; i < 10; i++) {
        s.insert(n[i]%42);
    }
    
    cout << s.size();
}