# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr, arr+n);
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++) cout<<prefix[i]<<" ";
    return 0;
}