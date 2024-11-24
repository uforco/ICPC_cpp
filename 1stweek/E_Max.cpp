# include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tem = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        tem = max(arr[i], tem);
    }
    cout<<tem<<endl;

    int gg = min(9, 5);

    cout<<gg;

    return 0;
}