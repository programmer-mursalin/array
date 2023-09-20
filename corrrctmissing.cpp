#include <bits/stdc++.h>
using namespace std;
void findMissing(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index - 1] > 0)
        {
            a[index - 1] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
}
int main()
{
    int a[] = {1, 2, 3, 3, 5};
    int n = sizeof(a) / sizeof(int);
    findMissing(a, n);
}