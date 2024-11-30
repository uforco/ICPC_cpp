# include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string re = "EGYPT";
    while (s.find(re) < -1)
    {
        s.replace(s.find(re), re.size(), " ");
    }
    cout<<s;
    return 0;
}