#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int x;
    float res, y;
    cin >> x >> y;
    if (x % 5 == 0)
    {
        res = y - x - 0.5;
        if (res > 0)
        {
            printf("%.2f\n", res);
        }
        else
        {
            printf("%.2f\n", y);
        }
    }
    else
    {
        printf("%.2f\n", y);
    }
    return 0;
}