# include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string repl;
    string sre;
    while (ss>>repl)
    {
        int i = 0;
        int j = repl.size() - 1;
        while (i < j)
        {
            /* code */
            swap(repl[i], repl[j]);
            i++;
            j--;
        }
        sre += repl + " ";
    }
    sre = sre.replace(sre.size()-1,1,"");
    cout<<sre;
    return 0;
}