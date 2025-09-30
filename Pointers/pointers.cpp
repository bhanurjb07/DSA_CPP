#include<iostream>
using namespace std;
int main(){ 
    int a =10;
    int *ptr = &a;
    int **pptr = &ptr;
    cout<<&a <<" = "<< ptr << endl;
    cout<< pptr <<" = "<< &ptr << endl;
    //Dereference
    cout<< *(&a)<<endl;
    return 0;
}
//Special operator that stores address of the other variables...