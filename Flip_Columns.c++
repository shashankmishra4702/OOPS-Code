// Problem Link --> https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/flip-columns/problem

#include <bits/stdc++.h>
using namespace std;

// If a string is same in the beginning then only all same string can be made as all 1. So we will mark all
// types of strings and keep a count. Then we will check zeroes in it. Final formula is (k-zero)%2==0 and find max.

struct mp
{
    string key;
    int val;
};

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n][m], ans = -1e9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    mp shas[1000];

    int mpsize = 0;
    for (int i = 0; i < n; i++)
    {
        string s = "";
        for (int j = 0; j < m; j++)
        {
            s += (arr[i][j] + '0');
        }
        bool found = false;
        for (int j = 0; j < mpsize; j++)
        {
            if (shas[j].key == s)
            {
                shas[j].val++;
                found = true;
                break;
            }
        }
        if (found == false)
        {
            shas[mpsize].key = s;
            shas[mpsize].val = 1;
            mpsize++;
        }
    }

    for (int i = 0; i < mpsize; i++)
    {
        string s = shas[i].key;
        int num = shas[i].val, zero = 0;
        for (size_t j = 0; j < s.size(); j++)
        {
            if (s[j] == '0')
                zero++;
        }
        if ((k - zero) % 2 == 0 && k >= zero)
            ans = max(ans, num);
    }

    cout << ans << endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// // If a string is same in the beginning then only all same string can be made as all 1. So we will mark all
// // types of strings and keep a count. Then we will check zeroes in it. Final formula is (k-zero)%2==0 and find max.

// int main()
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     int arr[n][m], ans = -1e9;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     map<string, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         string s = "";
//         for (int j = 0; j < m; j++)
//         {
//             s += (arr[i][j] + '0');
//         }
//         if (mp.find(s) != mp.end())
//             mp[s]++;
//         else
//             mp[s] = 1;
//     }
//     for (auto it : mp)
//     {
//         string s = it.first;
//         int num = it.second, zero = 0;
//         for (size_t i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '0')
//                 zero++;
//         }
//         if ((k - zero) % 2 == 0 && k >= zero)
//             ans = max(ans, num);
//     }
//     cout << ans << endl;
// }
