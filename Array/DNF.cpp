#include<iostream>
using namespace std;
//DNF
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int l=0, m=0, h=n-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++;
            l++;
        }else if(arr[m]==1){
            m++;
        }else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
   
}
int main(){
    int arr[10] = {2,0,2,1,1,0,1,2,0,0};
    int n = 10;    
    // int count0 =0, count1 =0, count2=0;
    // for(int i =0; i<n; i++){
    //     if(arr[i] == 0){
    //         count0++;
    //     }else if(arr[i]==1){
    //         count1++;
    //     }else{
    //         count2++;
    //     }
    // }
    // int idx =0; 
    // for(int i=0; i<count0; i++){
    //     arr[idx++] =0;
    // }
    // for(int i=0; i<count2; i++){
    //     arr[idx++] =1;
    // }
    // for(int i=0; i<count2; i++){
    //     arr[idx++] =02;
    // }
    // for(int i = 0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}