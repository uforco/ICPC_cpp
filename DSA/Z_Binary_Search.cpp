# include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    long long int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr+n);
    while (q--)
    {
        int x;
        cin>>x;
        int l = 0, r = n-1;
        bool flag = false;
        while (l <= r)
        {
            int midinx = (l+r)/2;
            if(arr[midinx] == x){
                flag = true;
                break;
            }
            else if ( arr[midinx] < x ) l = midinx+1;
            else r = midinx-1;
        }

        if(flag) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}