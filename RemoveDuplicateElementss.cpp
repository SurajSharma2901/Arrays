//TO REMOVE DUPLICATE ELEMENTS FROM THE ARRAY AND PRINT THE NUMBER OF UNIQUE ELEMENTS

#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int> &nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i]< nums[i-1]){
            return 0;
        }
    }
    return 1;
}
int RemoveDuplicateElements(vector<int> &nums){
    // sort(nums.begin(),nums.end());
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
}
int main(){
     vector<int> nums = { 1, 1, 2, 5, 4 , 7, 2, 4, 9};
     cout<<"With Duplicate Elements: ";
     for(int i=0;i<nums.size();i++){
         cout<<nums[i]<<" ";
     }
     cout<<endl;
     int L = RemoveDuplicateElements(nums);
     cout<<"With Unique Elements: ";
     for(int i=0;i<L;i++){
         cout<<nums[i]<<" ";
     }
     cout<<endl;
     cout<<"Element After Length: "<<RemoveDuplicateElements(nums);
     return 0;
}
