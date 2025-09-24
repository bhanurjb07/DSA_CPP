#include<iostream>
#include<algorithm>
using namespace std;
//BRUTE FORCE
// int Duplicate(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }

// SORTING APPROACH
// int Duplicate(int arr[], int n){
//     sort(arr,arr+n);
//     for(int i=1; i<n; i++){
//         if(arr[i]==arr[i-1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }


//HASH_MAP

int main(){
    int arr[]={12,3,4,5,6,9,5};
    int n = sizeof(arr)/sizeof(int);
    int ans = Duplicate(arr,n);
    if (ans != -1)
        cout << "Duplicate Number is: " << ans << endl;
    else
        cout << "No duplicate found" << endl;
    return 0;
}