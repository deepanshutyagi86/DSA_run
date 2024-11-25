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

void double_(int arr[],int n){
    
}

void uniques(int arr[], int n){
    int unique[10];
    int count = 0;
    for(int i=0;i<n;i++){
        if(search(unique,n,arr[i])==0){
            unique[count]=arr[i];
            count++;
        }
    }

    cout<<"uniques are: ";
    for(int i=0;i<count;i++){
        cout<<unique[i]<<" ";
    }  

}


int main(){

int arr[10] = {4,5,3,7,8,4,5,8,2,1};

uniques(arr,10);
double_(arr,10);


    return 0;
}