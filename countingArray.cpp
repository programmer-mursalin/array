#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count[n] = {0};
    for (int i = 0; i <= n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << i << " "
             << "-" << count[i] << endl;
    }
}
