#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,m;
    cin >> n;
    cin >> m;
    vector<int> nums(n), nums2(m);
    for (int x = 0; x < n; x++)
        cin >> nums[x];
    for (int x = 0; x < m; x++)
        cin >> nums2[x];
    vector<int> result = intersectionArray(nums, nums2);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";

    return 0;
}

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        int i = 0;
        int j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                temp.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])j++;
            else {
                i++;
            }

        }
        return temp;
        
    }