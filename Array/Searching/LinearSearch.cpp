#include<iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {12,3,4,5,6,7,8,9}, key;
    int n = sizeof(arr)/sizeof(int);
    cout<<"Enter Key to find: ";
    cin>> key;
    int ans = LinearSearch(arr,n,key);
    if (ans != -1)
        cout << "Key Found at index: " << ans << endl;
    else
        cout << "Key not found!" << endl;
    return 0;
}