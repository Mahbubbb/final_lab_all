#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    Node* first=NULL;
    Node* last=NULL;
    for(int i =0;i<n;i++){
        int value;
        cin>>value;
        Node* newnode = new Node(value);
        if(first==NULL){
            first=newnode;
            last=newnode;
        }
        else{
            last->next=newnode;
            last = newnode;
        }
    }
    Node* temp = first;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL";
    return 0;
}
