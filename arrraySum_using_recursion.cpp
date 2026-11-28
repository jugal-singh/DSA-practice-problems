#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &nums, int i);
int arraySum(vector<int> &nums);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int x = 0; x < n; x++)
        cin >> nums[x];
    cout << "the sum of array is = " << arraySum(nums) << endl;
    return 0;
}

int helper(vector<int> &nums, int i)
{
    if (i == nums.size())
        return 0;
    else
    {
        return nums[i] + helper(nums, i + 1);
    }
}

int arraySum(vector<int> &nums)
{
    return helper(nums, 0);
}