#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m];
    for (int i =0;i<m;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the target value\n";
    cin>>key;
    int low=0;
    int high=m-1;
    int mid1=0;
    int mid2=0;
    int found=0;
    while(low<=high){
        mid1=low + (high-low)/3;
        mid2=high - (high-low)/3;
        if(arr[mid1]==key){
            cout<<"Found at index "<<mid1;
            found =1;
            break;
        }
        else if(arr[mid2]==key){
            cout<<"Found at index "<<mid2;
            found =1;
            break;
        }
        else if(arr[mid1]>key){
            high=mid1-1;
        }
        else if(arr[mid2]<key){
            low=mid2+1;
        }
        else if(key>arr[mid1] && key<arr[mid2]){
            low= mid1+1;
            high=mid2-1;
        }
    }
    if(found==0){
        cout<<"not found";
    }
    return 0;
}
