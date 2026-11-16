#include<iostream>
using namespace std;
int main(){
    int n;
    int top=-1;
    int value;
    cin>>n;
    int stack[n];
    for (int i=0;i<n;i++){
        cin>>value;
        if(top<n-1){//-1,0,1,2,3
            top++;//0,1,2,3,4
            stack[top]=value;//a=10,a=20,a=30,a=40,a=50
        }
        else{
            cout<<"Overflow";
        }
    }
    cout<<"stack elements\n";
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<"\n";
    }
    if(top==-1){
        cout<<"Empty stack";
    }
    else{
        cout<<"deleting the top:"<<stack[top]<<"\n";
        top--;
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<"\n";
    }
    return 0;
}
