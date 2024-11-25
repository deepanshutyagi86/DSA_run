#include<iostream>
using namespace std;


int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];

    }
    for (int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){

    int arr[12]= {1,2,3,4,10,6,7,11,6,3,4,1};
cout<<duplicate(arr,12)<<endl;

return 0;
}