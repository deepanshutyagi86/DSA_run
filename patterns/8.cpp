#include<iostream>
using namespace std;



void pattern1(int n){
    int i =1;
    while(i<=n){
        int j =i;
        while (j>=1){
            cout<<j<<" ";
            j=j-1;
        }
        cout<<endl;
        i=i+1;             
}
}

void pattern_1(int n){
    int i =1;
    while(i<=n){
        int j=1;
        while (j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i=i+1;             
}
}

int main(){

    int n;
    cin>>n;
    
    pattern1(n);
    pattern_1(n);

       return 0;
}