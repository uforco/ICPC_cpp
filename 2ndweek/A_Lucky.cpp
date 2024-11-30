# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        int fn = 0;
        int ln = 0;
        for (int i = 0; i < 3; i++)
        {
            fn  += s[i] - '0';
        }
        for (int i = 3; i < s.size(); i++)
        {
            ln  += s[i] - '0';
        }
        if(fn == ln) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}