#include<iostream>
using namespace std;


void reverse(int arr[],int n){

int start=0;
int end=n-1;

while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}

    
}
int main(){

int arr[9] = {1,2,3,4,5,6,7,8,9};

reverse(arr,9);
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}