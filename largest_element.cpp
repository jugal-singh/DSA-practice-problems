#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int x = 0; x < n; x++)
        cin >> nums[x];
    cout<<"largest element in array is = "<<largestElement(nums)<<endl;
    return 0;
}

int largestElement(vector<int>& nums){

    int large = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]>large){
            large = nums[i];
        }
    }
    return large;
}