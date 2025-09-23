// 169. Majority Element
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<iostream>
#include<algorithm>
using namespace std;
// int MajorityElement(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int count =0;
//         for(int j=0; j<n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//             if(count>n/2){
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }

// int MajorityElement(int arr[], int n){
//     sort(arr, arr+n);
//     int count =0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==arr[n/2]){
//             count++;
//         }
//         if(count > n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }

//Moore's Voting Algorithm
int MajorityElement(int arr[], int n){
    int ans =0;
    int freq =0;
    for(int i=0; i<n; i++){
        if(freq==0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    int arr[10]={1,2,3,1,4,1,3,1,1,1};
    int result = MajorityElement(arr, 10);
    if(result != -1)
        cout << "Majority element: " << result << endl;
    else
        cout << "No majority element" << endl;
    return 0;
}