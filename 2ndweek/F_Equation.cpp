# include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    int result = 0;
    for (int i = 2; i < c; i+=2)
    {
        float rr = pow(n*1.0, i*1.0);
        result += (int)rr;
    }
    cout<<result;
    return 0;
}