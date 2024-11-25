#include<iostream>  
using namespace std;


void alter(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 




int main(){

int odd[5] = {33,44,55,66,77};
int even[6] = {11,22,33,44,55,8};


alter(odd,5);
alter(even,6);


return 0;
}