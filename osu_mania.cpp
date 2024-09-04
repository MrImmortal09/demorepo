#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        char ar[n][4];
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < 4; j++)
            {
                cin >> ar[i][j];
            }
        }

        long long aro[n];
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < 4; j++)
            {
                if(ar[i][j] == '#')
                {
                    aro[i] = j + 1;
                    break;
                }
            }
        }

        for (long long i = n - 1; i >= 0; i--)
        {
            cout << aro[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
