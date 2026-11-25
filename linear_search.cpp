#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& nums,int a);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int a,x=0;
    cin>>a;
    vector<int> nums(n);
    for (int x = 0; x < n; x++)
        cin >> nums[x];
    x = linearSearch(nums,a);
    if(x!=-1)
    cout<<a<<" found at index = "<<x<<endl;
    else 
    cout<<a<<" not exits in the array"<<endl;
    
    return 0;
}

int linearSearch(vector<int>& nums,int a) 
{
    int temp = -1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==a)temp = i;
    }
    return temp;
}