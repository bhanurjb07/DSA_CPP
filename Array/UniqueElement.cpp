#include<iostream>
using namespace std;
// int Unique(int arr[], int n){
//     for(int i=0; i<n; i++){
//         bool Isunique = true;
//         for(int j=0; j<n; j++){
//             if(i != j && arr[i]==arr[j]){
//                 Isunique = false;
//                 break;
//             }
//         }
//         if(Isunique){
//             return arr[i];
//         }
//     }
//     return -1;
// }

int Unique(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,1,2,3,4,5,7};
    int n =sizeof(arr)/sizeof(int);
    int res = Unique(arr,n);
    cout<<"Uniques_Element: "<<res<<endl;
    return 0;
}