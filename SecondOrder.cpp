// SECOND ORDER ELEMENT
#include<bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> &nums){
    int largest = nums[0];
    int slargest = -1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]>largest){
            slargest = largest;
            largest = nums[i];
        }
        else if(nums[i]< largest && nums[i]>slargest){
            slargest = nums[i];
        }
    }
    return slargest;
}
int SecondSmallest(vector<int> &nums){
    int smallest = nums[0];
    int ssmallest = -1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]< smallest){
            ssmallest = smallest;
            smallest = nums[i];
        }
        else if(nums[i]!=smallest && nums[i]< ssmallest){
            ssmallest = nums[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(vector<int> &nums){
    int SL = SecondLargest(nums);
    int SS = SecondSmallest(nums);
    return {SL,SS};
}
int main(){
    vector<int> nums = {7, 5, 9, 1, 5, 3};
    cout<<"Second Largest Element:"<<SecondLargest(nums)<<endl;
    cout<<"Second Smallest Element:"<<SecondSmallest(nums);
    return 0;
}




