#include <bits/stdc++.h>
using namespace std;

bool nextCheck(string strs)
{

    bool isNotSam = true;
    for (int i = 0; i < strs.size(); i += 2)
    {
        if (strs[i] + 0 == 40 && strs[i + 1] + 0 == 41)
        {
            continue;
        }
        else if (strs[i] + 0 == 91 && strs[i + 1] + 0 == 93)
        {
            continue;
        }
        else if (strs[i] + 0 == 123 && strs[i + 1] + 0 == 125)
        {
            continue;
        }
        else
        {
            isNotSam = false;
        }
    }
    return isNotSam;
};

bool lastINfast(string strs)
{
    bool isnotsame = true;
    int i = 0, j = strs.size() - 1;
    while (i < j)
    {
        string str = "";
        str += strs[i];
        str += strs[j];

        if (!nextCheck(str))
        {
            isnotsame = false;
            break;
        }

        i++;
        j--;
    }
    return isnotsame;
};

int main()
{
    string strs = "(";

    // cout << strs.size() / 2 << endl;

    // cout << strs[1] << endl;

    if (strs.size() == 1)
    {
        cout << " No Mech ";
        return 0;
    }

    if (nextCheck(strs) || lastINfast(strs))
    {
        cout << " 1st and 2nd check program run with nextCheck or lastINfast ";
    }
    else
    {
        cout << " No Mech ";
    }

    return 0;
}