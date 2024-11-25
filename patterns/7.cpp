#include<iostream>
using namespace std;

void pattern1(int n){

    int i=1;
    while(i<=n){
        int j=i;
        while(j<i*2){
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}

void pattern2(int n){
    int i =1;
    int count=1;
    
    while(i<=n){
        
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}

int main(){

    int n;
    cin>>n;
    
    pattern1(n);
    pattern2(n);
    
       return 0;
}