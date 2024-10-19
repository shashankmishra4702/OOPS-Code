#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int f(vector<int> &nums)
{
    int n = nums.size(), count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int first = nums[i], second = nums[j];
            if (first < 10)
            {
                first = first % 10;
                second = second % 10;
                if (gcd(first, second) == 1)
                    count++;
            }
            else
            {
                string s = to_string(first);
                int x = s[0] - '0';
                if (gcd(x, second) == 1)
                    count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {11, 21, 12};
    cout << f(nums);
}