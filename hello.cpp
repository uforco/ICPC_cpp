# include <bits/stdc++.h>
using namespace std;
int main(){
    int *a = new int;
    *a = 100;
    int **p = &a;
    cout<<a<<" "<< **p; 
    return 0;
}