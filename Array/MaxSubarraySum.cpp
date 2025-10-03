#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
//BRUTE FORCE 
// void maxSum(int *arr, int n){
//     int maxsum=INT_MIN;
//     for(int start=0; start<n; start++){
//         for(int end=start; end<n; end++){
//             int currsum =0;
//             for(int i=start; i<=end; i++){
//                 currsum += arr[i];
//             }
//             cout<<currsum<<",";
//             maxsum= max(currsum,maxsum);
//         }
//         cout<<endl;
//     }
//     cout<<"Maximmum sum of array:  "<<maxsum<<endl;
// }

//OPTIMISED
//  void maxSum(int *arr, int n){
//     int maxsum=INT_MIN;
//     for(int start=0; start<n; start++){
//         int currsum=0;
//         for(int end=start; end<n; end++){
//             currsum += arr[end];
//             maxsum = max(currsum, maxsum);
//         }
//     }
//     cout<<"Maximmum sum of array:  "<<maxsum<<endl;
//  }

//KADANE'S ALGORITHM
void maxSum(int *arr, int n){
    int maxsum = INT_MIN; 
    int currsum =0;
    for(int i=0; i<n; i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    cout<<"Maximmum sum of array:  "<<maxsum<<endl;
}

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=6;
    maxSum(arr,n);
    return 0;
}