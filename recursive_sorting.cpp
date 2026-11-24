#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &nums);
vector<int> insertionSort(vector<int> &nums);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int x = 0; x < n; x++)
        cin >> nums[x];
    nums = insertionSort(nums);
    for (int j = 0; j < n; j++)
        cout << nums[j] << " ";
    return 0;
}

//-------------recursive bubble sort----------------

void mergge(vector<int> &nums, int i, int j, int n)
{
    if (j > n - 2 - i)
        return;
    if (nums[j] > nums[j + 1])
    {
        swap(nums[j], nums[j + 1]);
    }
    mergge(nums, i, j + 1, n);
}

void rbs(vector<int> &nums, int i, int n)
{
    if (i > n - 2)
        return;
    mergge(nums, i, 0, n);
    rbs(nums, i + 1, n);
}

vector<int> bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 1)
        return nums;
    rbs(nums, 0, n);
    return nums;
}

//-------------recursive insertion sort----------------

void sorrt(vector<int> &nums, int i, int j, int n)
{
    if (j < 0)
        return;
    if (nums[j] < nums[j - 1])
    {
        swap(nums[j], nums[j - 1]);
        sorrt(nums, i, j - 1, n);
    }
}

void ris(vector<int> &nums, int i, int n)
{
    if (i > n - 1)
        return;
    sorrt(nums, i, i, n);
    ris(nums, i + 1, n);
}

vector<int> insertionSort(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 1)
        return nums;
    ris(nums, 1, n);
    return nums;
}