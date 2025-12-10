#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        this->val=data;
        left=right=NULL;
    }
};
int i = -1;
    Node* buildTree(vector<int>arr){
        i++;
        if(arr[i]== -1){
            return NULL;
        }
        Node* currNode = new Node(arr[i]);
        currNode->left = buildTree(arr);
        currNode->right = buildTree(arr);

        return currNode;
    }
int main(){
    vector<int>arr = {1,2,-1,-1,3,4,5,6,-1,-1,7,8,9,0,-1,-1};
    return 0;
}