#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int a,x=0;
    cin>>a;
    vector<int> nums(n), nums2(n);
    for (int x = 0; x < n; x++)
        cin >> nums[x];
    for (int x = 0; x < n; x++)
        cin >> nums2[x];
    vector<int> result = unionArray(nums, nums2);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";

    return 0;
}

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        int j=0,i=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                if(temp.empty() || temp.back() != nums2[j]){
                temp.push_back(nums2[j]);
                 }
                 j++;
            }
            else if(nums2[j]>nums1[i]){
                if(temp.empty() || temp.back() != nums1[i]){
                    temp.push_back(nums1[i]);                   
                }i++;
            }
            else if(nums1[i]==nums2[j]){
                if(temp.empty() || temp.back() != nums1[i]){
                 temp.push_back(nums1[i]);  
                }i++;
                 j++;
            }
        }
        while(i<nums1.size()){
            if(temp.empty() || temp.back() != nums1[i]){
                temp.push_back(nums1[i]);        
            }i++;
        }
        while(j<nums2.size()){
            if(temp.empty() || temp.back() != nums2[j]){
                temp.push_back(nums2[j]);
            }
                j++;
            }
        return temp;
    }