# include <iostream>
using namespace std;
int main(){
    long long int a,b;
    cin >>a>>b;
    long long int sum = a+b;
    long long int multi = a*b;
    long long int subtri = a-b;
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    cout<<a<<" * "<<b<<" = "<<multi<<endl;
    cout<<a<<" - "<<b<<" = "<<subtri<<endl;
    return 0;
}