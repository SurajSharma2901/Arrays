#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int> &nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            return 0;
        }
    }
    return 1;
}
void bubble_sort(vector<int> &nums){
    for(int i=0;i<nums.size()-1;i++){
        int swapped = 0;
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]> nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) break;
        
    }
}
int main(){
    vector<int> nums = {3,1,2,6,9,5};
    cout<<"Original Array:";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted Array: "<<isSorted(nums)<<endl;
    bubble_sort(nums);
    cout<<"After sorting:";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}