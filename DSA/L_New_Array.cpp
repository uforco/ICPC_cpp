#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n));
    string s = " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    for (int i = n - 1; 0 <= i; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == n - 1)
                s = "";
            cout << vec[i][j] << s;
        }
    }
    return 0;
}
