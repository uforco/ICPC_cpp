#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int resul = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n-1 ; 0 < i; i--)
    {
        for (int j = i - 1; 0 <= j; j--)
        {
            if (arr[i] + 1 == arr[j])
            {
                cout<<i<<" ";
                break;
            }
            // cout<<arr[i]<<" "<<arr[j]<<endl;
        };
        // cout<<arr[i]<<" ";
        // cout<<endl;
    }
    // cout << resul;

    return 0;
}