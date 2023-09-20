#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int l;
        cin >> l;
        int v1, v2;
        cin >> v1 >> v2;
        double x1 = ceil(l / v1);
        double x2 = ceil(l / v2);
        int r = (x1 - x2 - 1);

        cout << r << endl;
    }
}