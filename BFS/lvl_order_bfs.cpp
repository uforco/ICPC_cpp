#include <bits/stdc++.h>
using namespace std;
vector<int> v[15];
bool vis[15];

vector<pair<int, int>> bfs(int src)
{
    int squLvl[15];
    memset(squLvl, -1, sizeof(squLvl));
    vector<pair<int, int>> lvl;
    queue<int> q;
    q.push(src);
    vis[src] = true;
    squLvl[src] = 0;
    lvl.push_back({src, squLvl[src]});
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                squLvl[child] = squLvl[par] + 1;
                lvl.push_back({child, squLvl[child]});
            }
        }
    }
    return lvl;
}

int main()
{
    int n, x;
    cin >> n >> x;

    while (x--)
    {
        int f, s;
        cin >> f >> s;
        v[f].push_back(s);
        v[s].push_back(f);
    }
    memset(vis, false, sizeof(vis));
    int src;
    cin >> src;
    vector<pair<int, int>> bfslvl = bfs(0);

    for (pair<int, int> nodebfs : bfslvl)
    {
        cout << nodebfs.first << " " << nodebfs.second << endl;
    }

    return 0;
}