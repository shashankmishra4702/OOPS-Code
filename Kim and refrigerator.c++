#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

int x[20], y[20], n;
int ans;

int dis(int s, int d)
{
    int x1 = x[s], y1 = y[s];
    int x2 = x[d], y2 = y[d];
    int d1 = x2 - x1;
    if (d1 < 0)
        d1 = d1 * (-1);
    int d2 = y2 - y1;
    if (d2 < 0)
        d2 = d2 * (-1);
    return d1 + d2;
}

void f(int ind, int vis[], int node, int val)
{
    if (node == n)
    {
        ans = min(ans, val + dis(ind, n + 1));
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            vis[i] = 1;
            f(i, vis, node + 1, val + dis(ind, i));
            vis[i] = 0;
        }
    }
}

int main()
{
    for (int b = 1; b <= 10; b++)
    {
        ans = 1e9;
        cin >> n;
        int sx, sy, dx, dy;
        cin >> sx >> sy >> dx >> dy;
        x[0] = sx;
        y[0] = sy;
        x[n + 1] = dx;
        y[n + 1] = dy;
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i] >> y[i];
        }
        int vis[n + 2] = {0};
        f(0, vis, 0, 0);
        cout << "#" << " " << b << " " << ans << endl;
    }
}
