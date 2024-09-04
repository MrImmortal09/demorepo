#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        long long jumps_x = (x + k - 1);
        long long xj = jumps_x / k;

        long long jumps_y = (y + k - 1);
        long long yj = jumps_y / k;

        long long total_moves = max(xj, yj) * 2;

        if (xj > yj)
            total_moves =total_moves- 1;

        cout << total_moves << endl;
    }

    return 0;
}
