# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <string> s;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin>>x;
        s.push_back(x);

    }
    for (int i = 0; i < s.size(); i++)
    {
        if( s[i][0] >= 'a' && s[i][0] <= 'z' ){
            char ss = int(s[i][0] - 32);
            s[i][0] = ss;
        }
        cout<<s[i]<<endl;
    }
    return 0;
}