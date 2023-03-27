#include <iostream>
using namespace std;

int main()
{
    int n[9], max, max_index;

    for (int i = 0; i < 9; i++)
        cin >> n[i];
    
    max = n[0];
    max_index = 1;

    for (int i = 1; i < 9; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
            max_index = i + 1;
        }
    }

    cout << max << '\n' << max_index;
}