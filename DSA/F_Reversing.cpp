# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    string s = " ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = n-1; 0 <= i; i--)
    {
        if(i == 0) {
            s = "";
        }
        cout<<arr[i]<<s;
    }
    return 0;
}