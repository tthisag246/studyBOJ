#include <iostream>
using namespace std;

int main()
{
    int n, M;
    cin >> n;

    double scores[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    M = scores[0];

    for (int i = 1; i < n; i++)
    {
        if (scores[i] > M)
        {
            M = scores[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        scores[i] = scores[i] / M * 100;
        sum += scores[i];
    }

    cout << sum / n;
}