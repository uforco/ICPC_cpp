# include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B;
    char S;
    cin>>A>>S>>B;
    if(A > B && int(S) == int('>')) cout<<"Right";
    else if(A < B && int(S) == int('<')) cout<<"Right";
    else if(A == B && int(S) == int('=')) cout<<"Right";
    else cout<<"Wrong";
    return 0;
}