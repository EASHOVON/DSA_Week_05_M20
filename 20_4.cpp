#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    int arr[n], prefSum[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    prefSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefSum[i] = prefSum[i - 1] + arr[i - 1];
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int j, k;
        cin >> j >> k;
        cout << prefSum[k] - prefSum[j - 1] << endl;
    }

    return 0;
}