# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x < 0) x = 2;
        else if( x > 0 ) x = 1;
        a[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}