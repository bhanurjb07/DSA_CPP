#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //Contructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d){
    //new node
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next =temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head, int pos, int d){
    //insert at start
    if(pos == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos -1){
        temp = temp -> next;
        cnt++;
    }

    //inserint at last position
    if(temp-> next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    //cranyeating a node
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp->next;
    temp->next = nodetoinsert;

}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    //crete new node
    Node* node1 = new Node(10);
    cout << node1 -> data <<endl;
    cout<<node1 -> next<<endl;

    //head pointed to node
    Node* tail = node1;
    Node* head = node1;
    print(head);
    
    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,15);
    print(head);
    InsertAtTail(tail,20);
    print(head);

    InsertAtPosition(tail,head, 1, 22);
    print(head);
    return 0;
}