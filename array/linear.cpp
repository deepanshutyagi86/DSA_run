#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
     }
     return 0;  
}

int main(){

int arr[10] = {1,2,3,4,5,6,7,8,9,10};

int key;
cin>>key;

bool found = search(arr,10,key);
if (found){  
    cout<<"key is present";
}
else{
    cout<<"key is not present";
}

    return 0;
}