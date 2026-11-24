#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int>& nums);
vector<int> quickSort(vector<int>& nums);

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int x=0;x<n;x++)cin>>nums[x];
    //nums = mergeSort(nums);
    nums = quickSort(nums);
    for(int j=0;j<n;j++)cout<<nums[j]<<" ";
    return 0;
}

// ------------------merge sort-----------------------

void merge(vector<int>& nums,int low,int mid,int high){
        vector<int>temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i] = temp[i-low];
        }

    }

    void ms(vector<int>& nums ,int low ,int high)
    {
        if(low>=high)return;
        int mid = (low+high)/2;
        ms(nums,low,mid);
        ms(nums,mid+1,high);
        merge(nums,low,mid,high);

    }

    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)return nums;
        ms(nums,0,n-1);
        return nums;


    }

    // ------------------quick sort-----------------------

    int partition(vector<int>& nums,int low ,int high){
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i<j){
            while(nums[i]<=pivot && i<=high-1){
                i++;
                }
            while(nums[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j)swap(nums[i],nums[j]);    
        }
        swap(nums[low],nums[j]);
        return j;
    }

    void qs(vector<int>& nums,int low,int high){
        if(low<high){
            int pindex = partition(nums,low,high);
            qs(nums,low,pindex-1);
            qs(nums,pindex+1,high);
        }
    }

    vector<int> quickSort(vector<int>& nums){
        int n = nums.size();
        if(n<=1) return nums;
        qs(nums,0,n-1);
        return nums;
    }