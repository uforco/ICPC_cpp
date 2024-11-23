#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int b = int(a);
    if (b >= int('A') && b <= int('Z'))
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    else if (b >= int('a') && b <= int('z'))
        cout << "ALPHA" << endl
             << "IS SMALL";
    else if (b >= int('0') && b <= int('9'))
        cout << "IS DIGIT" << endl;
    else
        cout << "";
    return 0;
}