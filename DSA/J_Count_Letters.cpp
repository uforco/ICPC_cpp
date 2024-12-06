# include <bits/stdc++.h>
using namespace std;

class Alphbet {
    public:
        char letter;
        int num;
};

int main(){
    string s;
    cin>>s;
    Alphbet arr[26];
    for (int i = 0; i < 26; i++)
    {
        char alpha = 'a'+i;
        arr[i].letter = alpha;
        arr[i].num = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if( s[i] == arr[j].letter ) arr[j].num += 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if( arr[i].num > 0 ) cout<<arr[i].letter<<" : "<<arr[i].num<<endl;
    }
    
    return 0;
}