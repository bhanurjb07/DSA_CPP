//Remove Duplicate from Sorted Array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void removeduplicate(vector<int> &arr){
//     for(int i=0; i< arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]==arr[j]){
//                 arr.erase(arr.begin() + j);
//                 j--;
//             }
//         }
//     }
// }

void removeduplicate(vector<int> &arr) {
    sort(arr.begin(), arr.end());                 
    auto last = unique(arr.begin(), arr.end());  
    arr.erase(last, arr.end());                   
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8, 6, 9, 10, 3, 4};
    removeduplicate(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}