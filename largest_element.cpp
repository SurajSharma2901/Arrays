#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int> &arr){
    int largest =arr[0];

    for(int i=0;i<arr.size();i++){
        if (arr[i]> largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    vector<int> arr = {5, 6, 3, 1, 9};
    cout<<"Largest element is:"<<LargestElement(arr);
    return 0;
}