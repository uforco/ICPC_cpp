# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int whatreplace, whoreplace;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>whatreplace>>whoreplace;
    for (int i = 0; i < n; i++)
    {
        if(v[i] == whatreplace){
            v[i] = whoreplace;
        };
        cout<<v[i]<<" ";
        
    }
    return 0;
}