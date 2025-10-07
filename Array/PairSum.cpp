#include<iostream>
#include<vector>
using namespace std;
// vector<int>PairSum(vector<int> arr, int target){
//     vector<int>ans;
//     int n= arr.size();
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

//For SORTED Array => Two Pointer Approach
// vector<int>PairSum(vector<int>arr, int target){
//     vector<int>ans;
//     int i = arr[0], j = arr.size()-1;
//     while(i<j){
//         if(arr[i]+arr[j]>target){
//             j--;
//         }else if(arr[i]+arr[j]<target){
//             i++;
//         }else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

int main(){
    vector<int> arr ={1,2,3,4,5,6,7,8,9,0};
    vector<int>ans=PairSum(arr,9);
     if(!ans.empty()) {
        cout << "Pair found: " << arr[ans[0]] << " and " << arr[ans[1]] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}