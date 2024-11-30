# include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string k;
    int wortcout = 0;
    int i = 0;
    while (i < s.size())
    {
        // if((k[0] >= 'A' && k[0] <= 'Z') || (k[0] >= 'a' && k[0] <= 'z')  ){
        //     wortcout++;
        // }
        if(s[i] == ' ') wortcout++;
        
        i++;
    }
    cout<<wortcout<<endl;
    return 0;
}