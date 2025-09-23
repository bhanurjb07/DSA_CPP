#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//BRUTE FORCE
// void TwoSum(vector<int> arr, int key){
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]+arr[j]==key){
//                 cout<<arr[i]<<" "<<arr[j];
//             }
//         }
//     }
// }

//TWO POINTER
// void TwoSum(vector<int>arr, int key){
//     int n=arr.size();
//     sort(arr.begin(), arr.end());
//     int i =0, j=n-1;
//     while(i<j){
//         if(arr[i]+arr[j]<key){
//             i++;
//         }else if(arr[i]+arr[j]>key){
//             j--;
//         }else{
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//             i++;
//             j--;
//         }
//     }
// }

//HASHING

int main(){
    vector<int> arr ={1,2,3,4,5,6,7,8,9};
    int key = 7;
    TwoSum(arr, key);
    return 0;
}