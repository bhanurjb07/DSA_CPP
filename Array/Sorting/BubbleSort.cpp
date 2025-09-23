#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
    int arr[10]={6,7,9,2,0,12,3,4,56,11};
    BubbleSort(arr, 10);
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}