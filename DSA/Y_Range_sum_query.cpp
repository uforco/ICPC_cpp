# include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    long long int arr[n], prif[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    prif[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prif[i] = prif[i-1] + arr[i];
    }
    // for (int i = 0; i < n; i++) cout<<prif[i]<<" ";
    // cout<<endl;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        // cout<<prif[l]<<" = "<<prif[r]<<endl;
        if( l > 0 ) cout<<prif[r]-prif[l-1]<<endl;
        else cout<<prif[r]-0<<endl;
    }
    return 0;
}