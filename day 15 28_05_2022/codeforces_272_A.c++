#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f, t=0, a=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> f;
        t += f;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((t + i) % (n + 1) != 1)
        {
            a += 1;
        }
    }
    cout << a << endl;
}