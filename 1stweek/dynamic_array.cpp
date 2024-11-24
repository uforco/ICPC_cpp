# include <bits/stdc++.h>
using namespace std;
int main(){
    int n, nn;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin>>a[i];
    cin>>nn;
    int *b = new int[nn];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    delete[] a;
    for (int i = 0; i < n; i++)
    {
        cin>>b[n+i];
    }
    
    for (int i = 0; i < nn; i++) cout<<b[i]<<" ";
    // cout<<endl;
    // for (int i = 0; i < n; i++) cout<<a[i]<<" ";
    
    
    return 0;
}