#include<iostream>
using namespace std;

int find_duplicate(int arr[],int n){

    int ans=0;
    for(int i=0; i < n; i++){
        ans = ans^arr[i];
    }
    for(int i=1; i < n; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){

int arr[8]= {1,2,3,4,5,6,7,5};

int duplicate = find_duplicate(arr,8);
cout<<duplicate<<endl;

return 0;
}