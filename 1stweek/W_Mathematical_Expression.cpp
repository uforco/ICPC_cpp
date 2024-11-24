# include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;

    if(int(S) == int('+') && int(Q) == int('=')){
        if(A+B == C) cout<<"Yes";
        else cout<<A+B;
    }
    else if(int(S) == int('-') && int(Q) == int('=')){
        if(A-B == C) cout<<"Yes";
        else cout<<A-B;
    }
    else if(int(S) == int('*') && int(Q) == int('=')){
        if(A*B == C) cout<<"Yes";
        else cout<<A*B;
    }else cout<<"";
    return 0;
}