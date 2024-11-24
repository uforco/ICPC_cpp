# include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3], minvel=INT_MAX, maxvel=INT_MIN;
    for (int i = 0; i < 3; i++) cin>>arr[i];
    for (int i = 0; i < 3; i++)
    {
        minvel = min(minvel, arr[i]);
        maxvel = max(maxvel, arr[i]);
    }
    cout<<minvel<<" "<<maxvel;
    return 0;
}